#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	a;

	i = 0;
	a = 1;
	while (str[i] != '\0')
	{
		if (!((str[i] > 64) && (str[i] < 91)))
		{
			a = 0;
		}
		i++;
	}
	return (a);
}
