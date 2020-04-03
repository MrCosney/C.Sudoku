/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/02 11:31:30 by cosney            #+#    #+#             */
/*   Updated: 2020/04/02 18:43:07 by cosney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

#include <unistd.h>

int		check(int argc, char **argv);
char	display(char sud[][9], int argc, char **argv);
int		*reverse_empty_spots(char argv[][9], int *position);
int		*empty_spots(char argv[][9], int *position);
void	sudoku_array(int argc, char **argv, char sud[][9]);
int		check_correct_position(char sud[][9], int *pos, char value);
int		comparator(char sud[][9], char rev_sud[][9]);
int		is_in_square(char sud[][9], int *pos, char value);

#endif
