#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	a;

	i = 0;
	a = 1;
	while (str[i] != '\0')
	{
		if (!((str[i] > 96) && (str[i] < 123)))
		{
			a = 0;
		}
		i++;
	}
	return (a);
}
