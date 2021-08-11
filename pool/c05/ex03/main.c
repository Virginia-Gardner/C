#include <stdio.h>

int	ft_recursive_power(int nb, int power);

int	main(void)
{
	printf("число %d в степени %d равно %d\n", 0, 0,
		ft_recursive_power(0, 0));
	printf("число %d в степени %d равно %d\n", 2, -1,
		ft_recursive_power(2, -1));
	printf("число %d в степени %d равно %d\n", 2, 0,
		ft_recursive_power(2, 0));
	printf("число %d в степени %d равно %d\n", 2, 1,
		ft_recursive_power(2, 1));
	printf("число %d в степени %d равно %d\n", 2, 2,
		ft_recursive_power(2, 2));
	printf("число %d в степени %d равно %d\n", 3, 3,
		ft_recursive_power(3, 3));
	return (0);
}
