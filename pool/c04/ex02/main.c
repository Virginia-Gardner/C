#include <stdio.h>

void	ft_putnbr(int nb);

int	main(void)
{
	int	i;

	i = -2147483648;
	printf("Передали - :\n%d\n", i);
	ft_putnbr(i);
	i = 2147483647;
	printf("\nПередали - :\n%d\n", i);
	ft_putnbr(i);
	return (0);
}
