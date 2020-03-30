NAME = sudoku
FILES = srcs/check.c srcs/display.c srcs/empty_spots.c srcs/is_in_square.c srcs/sudoku_array.c srcs/comparator.c srcs/reverse_empty_spots.c srcs/check_correct_position.c srcs/sudoku.c
INCLUDES = includes/

all:
	@gcc $(FILES) -I$(INCLUDES) -o $(NAME)

clean:
	/bin/rm -f $(NAME)
re: clean all
