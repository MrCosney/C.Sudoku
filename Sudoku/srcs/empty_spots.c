int		*empty_spots(char argv[][9], int *pos)
{
	int x;
	int y;

	x = 0;
	while (x < 9)
	{
		y = 0;
		while (y < 9)
		{
			if (argv[x][y] == '.')
			{
				pos[0] = x;
				pos[1] = y;
				return (pos);
			}
			y++;
		}
		x++;
	}
	pos[0] = -1;
	return (0);
}
