/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_array.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/02 11:25:32 by cosney            #+#    #+#             */
/*   Updated: 2020/04/02 11:25:33 by cosney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		sudoku_array(char **argv, char sud[][9])
{
	int l;
	int s;

	l = 1;
	while (l <= 9)
	{
		s = 0;
		while (s < 9)
		{
			sud[l - 1][s] = argv[l][s];
			s++;
		}
		l++;
	}
}
