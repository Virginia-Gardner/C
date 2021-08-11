int	ft_found_nb(int i, int k, int n, char *str)
{
	while (str[i] != 0)
	{
		if (str[i] == '-')
			k++;
		while (str[i] >= '0' && str[i] <= '9')
		{
			n = (n + (str[i] - '0'));
			i++;
			if (!(str[i] > '0' && str[i] < '9'))
				break ;
			n *= 10;
		}
		if (n != 0)
			break ;
		i++;
	}
	if (k % 2 == 1)
		n *= (-1);
	return (n);
}

int	ft_atoi(char *str)
{
	int	k;
	int	n;
	int	i;

	n = 0;
	i = 0;
	k = 0;
	n = ft_found_nb(i, k, n, str);
	return (n);
}
