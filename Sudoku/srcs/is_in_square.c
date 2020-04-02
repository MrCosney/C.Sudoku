int		is_in_square(char sud[][9], int *pos, char value)
{
	int index;
	int index_2;
	int sq_x;
	int sq_y;

	sq_x = pos[1] / 3;
	sq_y = pos[0] / 3;
	index = sq_y * 3;
	while (index < (sq_y * 3 + 3))
	{
		index_2 = sq_x * 3;
		while (index_2 < (sq_x * 3 + 3))
		{
			if (sud[index][index_2] == value
				&& (pos[0] != index && pos[1] != index_2))
				return (1);
			index_2++;
		}
		index++;
	}
	return (0);
}
