/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_array.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/02 11:25:32 by cosney            #+#    #+#             */
/*   Updated: 2020/04/02 19:45:51 by cosney           ###   ########.fr       */
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
		if (strcmp("-red", argv[z]) == 0 || strcmp("-grn", argv[z]) == 0)
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
