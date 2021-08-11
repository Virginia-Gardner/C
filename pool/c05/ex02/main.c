#include <stdio.h>
int	ft_iterative_power(int nb, int power);

int	main(void)
{
	int	nb;
	int	power;

	nb = 0;
	power = 0;
	printf("число %d в степени %d равно %d\n", nb, power,
		ft_iterative_power(nb, power));
	nb = 2;
	power = -1;
	printf("число %d в степени %d равно %d\n", nb, power,
		ft_iterative_power(nb, power));
	nb = 2;
	power = 0;
	printf("число %d в степени %d равно %d\n", nb, power,
		ft_iterative_power(nb, power));
	printf("число %d в степени %d равно %d\n", 2, 1,
		ft_iterative_power(2, 1));
	printf("число %d в степени %d равно %d\n", 2, 2,
		ft_iterative_power(2, 2));
	printf("число %d в степени %d равно %d\n", 3, 3,
		ft_iterative_power(3, 3));
	printf("число %d в степени %d равно %d\n", 4, 4,
		ft_iterative_power(4, 4));
	return (0);
}
