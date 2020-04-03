# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cosney <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/02 11:42:30 by cosney            #+#    #+#              #
#    Updated: 2020/04/03 08:37:20 by cosney           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sudoku

FILES = srcs/*.c

INCLUDES = includes/

all: $(NAME)

$(NAME):
	@gcc $(FILES) -I$(INCLUDES) -o $(NAME)

clean:
	@/bin/rm -f *.o

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
