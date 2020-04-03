/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_in_square.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/02 11:25:07 by cosney            #+#    #+#             */
/*   Updated: 2020/04/03 12:44:55 by cosney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_in_square(char sud[][9], int *pos, char value)
{
	int x;
	int y;
	int sq_x;
	int sq_y;

	sq_x = pos[1] / 3;
	sq_y = pos[0] / 3;
	x = sq_y * 3;
	while (x < (sq_y * 3 + 3))
	{
		y = sq_x * 3;
		while (y < (sq_x * 3 + 3))
		{
			if (sud[x][y] == value && (pos[0] != x && pos[1] != y))
				return (1);
			y++;
		}
		x++;
	}
	return (0);
}
