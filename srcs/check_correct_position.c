/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_correct_position.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccurtain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 19:53:26 by ccurtain          #+#    #+#             */
/*   Updated: 2020/03/15 20:03:45 by ccurtain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_in_square(char sud[][9], int *pos, char value);

int		check_correct_position(char sud[][9], int *pos, char value)
{
	int index;

	index = 0;
	while (index < 9)
	{
		if (sud[pos[0]][index] == value && pos[1] != index)
			return (1);
		index++;
	}
	index = 0;
	while (index < 9)
	{
		if (sud[index][pos[1]] == value && pos[0] != index)
			return (1);
		index++;
	}
	if (is_in_square(sud, pos, value))
		return (1);
	return (0);
}
