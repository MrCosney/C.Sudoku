/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/02 11:24:41 by cosney            #+#    #+#             */
/*   Updated: 2020/04/02 19:42:03 by cosney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "colors.h"

int		flags(int argc, char **argv);
int		get_color(int argc, char **argv);

void		std_display(char sud[][9])
{
	int	x;
	int	y;

	x = 0;
	while (x < 9)
	{
		y = 0;
		while (y < 9)
		{
			write(1, &sud[x][y], 1);
			if (y != 8)
				write(1, " ", 1);
			y++;
		}
		write(1, "\n", 1);
		x++;
	}
}

void		new_display(char sud[][9], char *color)
{
	int	x;
	int	y;

	x = 0;
	printf("%s", color);
	while (x < 9)
	{
		y = 0;
		while (y < 9)
		{
			printf("%c", sud[x][y]);
			if (y != 8)
 				printf(" ");
			y++;
		}
		x++;
		printf("\n");
	}
	printf(KNRM);
}

void		display(char sud[][9], int argc, char **argv)
{
	int	flag;
	int	color;

	flag = flags(argc, argv);
	color = get_color(argc, argv);
	if (color == 100)
		new_display(sud, KRED);
	else if (color == 200)
		new_display(sud, KGRN);
	else
		new_display(sud, KNRM);
}
