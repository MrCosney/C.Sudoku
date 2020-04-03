/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_array.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/02 11:25:32 by cosney            #+#    #+#             */
/*   Updated: 2020/04/03 09:05:59 by cosney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void		sudoku_array(int argc, char **argv, char sud[][9])
{
	int l;
	int s;
	int z;

	l = 1;
	z = 1;
	while (z < argc)
	{
		if (strcmp("-red", argv[z]) == 0 || strcmp("-grn", argv[z]) == 0 || \
				strcmp("-yel", argv[z]) == 0 || strcmp ("-blu", argv[z]) == 0 \
				|| strcmp("-w", argv[z]) == 0)
		{
			z++;
			continue;
		}
		s = 0;
		while (s < 9)
		{
			sud[l - 1][s] = argv[z][s];
			s++;
		}
		z++;
		l++;
	}
}
