#include <unistd.h>

char		display(char sud[][9])
{
	int x;
	int y;

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
	return (0);
}
