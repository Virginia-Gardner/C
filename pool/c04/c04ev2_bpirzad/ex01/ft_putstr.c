#include <unistd.h>
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (1)
	{	
		if (str[i] == '\0')
			break ;
		write(1, &str[i], 1);
		i++;
	}
}
