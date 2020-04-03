/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/02 11:24:41 by cosney            #+#    #+#             */
/*   Updated: 2020/04/03 11:36:43 by cosney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void		write_display(char sud[][9])
{
	int		x;
	int		y;
	FILE	*fp;

	fp = fopen("Solved Sudoku.txt", "w+");
	x = 0;
	while (x < 9)
	{
		y = 0;
		while (y < 9)
		{
			fprintf(fp, "%c", sud[x][y]);
			if (y != 8)
				fprintf(fp, " ");
			y++;
		}
		fprintf(fp, "\n");
		x++;
	}
	fclose(fp);
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
	else if (color == 300)
		new_display(sud, KYEL);
	else if (color == 400)
		new_display(sud, KBLU);
	else if (color == 500)
		write_display(sud);
	else
		new_display(sud, KNRM);
}
