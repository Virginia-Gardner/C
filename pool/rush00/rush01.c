void	ft_putchar(char c);

void	last_line (int x, int x_max)
{
	while (x > 0)
	{
		if (x == x_max)
		{
			ft_putchar('\\');
			if (x_max == 1)
			{
				ft_putchar('\n');
			}
		}
		else if (x == 1)
		{
			ft_putchar('/');
			ft_putchar('\n');
		}
		else
		{
			ft_putchar('*');
		}
		x--;
	}
}

void	first_line (int x, int x_max)
{
	while (x > 0)
	{
		if (x == x_max)
		{
			ft_putchar('/');
			if (x_max == 1)
				ft_putchar('\n');
		}
		else if (x == 1)
		{
			ft_putchar('\\');
			ft_putchar('\n');
		}
		else
		{
			ft_putchar('*');
		}
		x--;
	}
}

void	telo(int x, int x_max)
{
	while (x > 0)
	{
		if (x == x_max)
		{
			ft_putchar('*');
			if (x_max == 1)
				ft_putchar('\n');
		}
		else if (x == 1)
		{
			ft_putchar('*');
			ft_putchar('\n');
		}
		else
		{
			ft_putchar(' ');
		}
		x--;
	}
}

void	rush(int x, int y)
{
	int	x_max;
	int	y_max;

	x_max = x;
	y_max = y;
	while (y > 0)
	{
		if (y == y_max)
			first_line(x, x_max);
		else if (y == 1)
			last_line(x, x_max);
		else
			telo(x, x_max);
		x = x_max;
		y--;
	}
}
