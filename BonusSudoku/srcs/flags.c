/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/02 13:26:01 by cosney            #+#    #+#             */
/*   Updated: 2020/04/02 19:37:48 by cosney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int		flags(int argc, char **argv)
{
	int index;
	int f;

	index = 0;
	f = 0;
	while (index < argc)
	{
		if (strcmp("-red", argv[index]) == 0)
			f += 7;
		if (strcmp("-w", argv[index]) == 0)
			f += 3;
		if (strcmp("-b", argv[index]) == 0)
			f += 1;
		index ++;
		if (f == 0 || f == 1 || f == 3 || f == 4 || f == 7 || f == 8
			|| f == 10 || f == 11)
			continue;
		else
		{
			printf("%s", "Error: Please make sure you choose \
				each option just once =))");
			return (-1);
		}
	}
	return (f);
}
