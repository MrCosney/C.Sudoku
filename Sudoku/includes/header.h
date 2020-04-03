/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/02 11:31:30 by cosney            #+#    #+#             */
/*   Updated: 2020/04/03 09:39:34 by cosney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

#include <unistd.h>

void	sudoku_array(char **argv, char sud[][9]);
void	display(char sud[][9]);
int		check(int argc, char **argv);
int		*reverse_empty_spots(char argv[][9], int *position);
int		*empty_spots(char argv[][9], int *position);
int		check_correct_position(char sud[][9], int *pos, char value);
int		comparator(char sud[][9], char rev_sud[][9]);
int		is_in_square(char sud[][9], int *pos, char value);

#endif
