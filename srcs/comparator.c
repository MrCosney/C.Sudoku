int	comparator(char sud[][9], char rev_sud[][9])
{
	int idx_1;
	int idx_2;

	idx_1 = 0;
	while (idx_1 < 9)
	{
		idx_2 = 0;
		while (idx_2 < 9)
		{
			if (sud[idx_1][idx_2] != rev_sud[idx_1][idx_2])
				return (1);
			idx_2 ++;
		}
		idx_1++;
	}
	return (0);
}
