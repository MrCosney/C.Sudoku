/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_correct_position.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/02 11:24:01 by cosney            #+#    #+#             */
/*   Updated: 2020/04/02 11:24:10 by cosney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

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
