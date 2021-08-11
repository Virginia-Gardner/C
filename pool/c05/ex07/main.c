#include <stdio.h>

int	ft_find_next_prime(int nb);

int	main(void)
{
	int	i;

	i = -1;
	printf("число %d - %d\n", i, ft_find_next_prime(i));
	i = 0;
	printf("число %d - %d\n", i, ft_find_next_prime(i));
	i = 1;
	printf("число %d - %d\n", i, ft_find_next_prime(i));
	i = 2;
	printf("число %d - %d\n", i, ft_find_next_prime(i));
	i = 3;
	printf("число %d - %d\n", i, ft_find_next_prime(i));
	i = 4;
	printf("число %d - %d\n", i, ft_find_next_prime(i));
	i = 5;
	printf("число %d - %d\n", i, ft_find_next_prime(i));
	i = 6;
	printf("число %d - %d\n", i, ft_find_next_prime(i));
	i = 7;
	printf("число %d - %d\n", i, ft_find_next_prime(i));
	return (0);
}
