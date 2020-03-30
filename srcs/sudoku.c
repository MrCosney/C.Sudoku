/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/29 16:12:42 by cosney            #+#    #+#             */
/*   Updated: 2020/03/30 19:43:45 by cosney         ###   ########.fr         */
/*                                                                            */
/* ************************************************************************** */

#include "HEADER.h"

int		solution(char sud[][9], int var)
{
	int		position[2];
	char	value;

	if (var == 0)
		empty_spots(sud, position);
	if (var == 1)
		reverse_empty_spots(sud, position);
	if (position[0] == -1)
		return (0);
	value = '1';
	while (value <= '9')
	{
		if (check_correct_position(sud, position, value) == 0)
		{
			sud[position[0]][position[1]] = value;
			if (!solution(sud, var))
				return (0);
			sud[position[0]][position[1]] = '.';
		}
		value++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	char sudoku[9][9];
	char rev_sudoku[9][9];

	if (check(argc, argv))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	sudoku_array(argv, sudoku);
	sudoku_array(argv, rev_sudoku);
	if (solution(sudoku, 0) == 0 && solution(rev_sudoku, 1) == 0)
	{
		if (comparator(sudoku, rev_sudoku))
		{
			write(1, "Error\n", 6);
			return (0);
		}
		display(sudoku);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
