#ifndef _HEADER_
# define _HEADER_
# include <unistd.h>

int		check(int argc, char **argv);
char		display(char sud[][9]);
int		*reverse_empty_spots(char argv[][9], int *position);
int		*empty_spots(char argv[][9], int *position);
void		sudoku_array(char **argv, char sud[][9]);
int		check_correct_position(char sud[][9], int *pos, char value);
int		comparator(char sud[][9], char rev_sud[][9]);

#endif
