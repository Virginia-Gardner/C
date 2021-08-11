#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	a;

	i = 0;
	a = 1;
	while (str[i] != '\0')
	{
		if (!((str[i] > 47) && (str[i] < 58)))
		{
			a = 0;
		}
		i++;
	}
	return (a);
}
