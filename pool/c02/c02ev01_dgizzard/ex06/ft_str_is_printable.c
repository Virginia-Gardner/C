#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	int	a;

	i = 0;
	a = 1;
	while (str[i] != '\0')
	{
		if (!(str[i] > 31 && str[i] <= 127))
		{
			a = 0;
		}
		i++;
	}
	return (a);
}
