int		ft_checkchars(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while ((argv[i][j] >= '1' && argv[i][j] <= '9') || (argv[i][j] == '.'))
			j++;
		if (j != 9)
			return (1);
		i++;
	}
	return (0);
}

int		ft_check(int argc, char **argv)
{
	int i;
	int j;
	int point;
	int numbs;

	numbs = 0;
	point = 0;
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] != '.')
				numbs++;
			if (argv[i][j] == '.')
				point = 1;
			j++;
		}
		i++;
	}
	if (numbs < 16)
		return (1);
	return (0);
}

int		check_repeat_chars_in_row(int argc, char **argv)
{
	int i;
	int j;
	int a;

	a = 1;
	while (a < argc)
	{
		i = 0;
		while (argv[a][i] != '\0')
		{
			j = i + 1;
			while (argv[a][j] != '\0')
			{
				if (argv[a][i] == argv[a][j] && argv[a][j] != '.')
					return (1);
				j++;
			}
			i++;
		}
		a++;
	}
	return (0);
}

int		check_repeat_chars_in_col(int argc, char **argv)
{
	int i;
	int j;
	int a;

	a = 1;
	i = 0;
	while (argv[a][i] != '\0')
	{
		while (a < argc)
		{
			j = a + 1;
			while (j < argc)
			{
				if (argv[j][i] == argv[a][i] && argv[j][i] != '.')
					return (1);
				j++;
			}
			a++;
		}
		i++;
		a = 1;
	}
	return (0);
}

int		check(int argc, char **argv)
{
	if (argc != 10)
		return (1);
	if (ft_checkchars(argc, argv))
		return (1);
	if (check_repeat_chars_in_row(argc, argv))
		return (1);
	if (check_repeat_chars_in_col(argc, argv))
		return (1);
	if (ft_check(argc, argv))
		return (1);
	return (0);
}
