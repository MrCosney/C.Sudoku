/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_color.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/02 16:26:03 by cosney            #+#    #+#             */
/*   Updated: 2020/04/02 16:52:57 by cosney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		get_color(int argc, char **argv)
{
	int	index;

	index = 0;
	while (index < argc)
	{
		if (strcmp("-red", argv[index]) == 0)
			return (100);
		index++;
	}
	return (0);
}
