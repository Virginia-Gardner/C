#include <stdio.h>

int	ft_sqrt(int nb);

int	main(void)
{
	int	nb;

	nb = -9;
	printf("корень %d - %d\n", nb, ft_sqrt(nb));
	nb = 0;
	printf("корень %d - %d\n", nb, ft_sqrt(nb));
	nb = 1;
	printf("корень %d - %d\n", nb, ft_sqrt(nb));
	nb = 2;
	printf("корень %d - %d\n", nb, ft_sqrt(nb));
	nb = 3;
	printf("корень %d - %d\n", nb, ft_sqrt(nb));
	nb = 4;
	printf("корень %d - %d\n", nb, ft_sqrt(nb));
	nb = 5;
	printf("корень %d - %d\n", nb, ft_sqrt(nb));
	nb = 9;
	printf("корень %d - %d\n", nb, ft_sqrt(nb));
	nb = 289;
	printf("корень %d - %d\n", nb, ft_sqrt(nb));
	return (0);
}
