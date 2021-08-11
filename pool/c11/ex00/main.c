#include <stdio.h>

void	ft_foreach(int *tab, int length, void(*f)(int));
int		sum(int a);
int		g_g = 0;

int	main(void)
{
	int	numbers[5];

	numbers[0] = {1};
	numbers[1] = {2};
	numbers[2] = {3};
	numbers[3] = {4};
	numbers[4] = {5};
	ft_foreach(numbers, 5, &sum);
	printf("%d", g_g);
	return (0);
}

int	sum(int a)
{
	g_g += a;
}
