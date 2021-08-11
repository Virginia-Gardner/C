int	ft_count_if(char **tab, int length, int(*f)(char*))
{
	int	i;
	int	amount;

	i = 0;
	amount = 0;
	while (tab[i])
	{
		if (f(tab[i]) != 0)
			amount++;
		i++;
	}
	return (amount);
}
