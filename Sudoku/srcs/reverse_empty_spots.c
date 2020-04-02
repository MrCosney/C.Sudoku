int		*reverse_empty_spots(char argv[][9], int *pos)
{
	int x;
	int y;

	x = 8;
	while (x >= 0)
	{
		y = 8;
		while (y >= 0)
		{
			if (argv[x][y] == '.')
			{
				pos[0] = x;
				pos[1] = y;
				return (pos);
			}
			y--;
		}
		x--;
	}
	pos[0] = -1;
	return (0);
}
