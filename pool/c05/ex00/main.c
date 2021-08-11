#include <stdio.h>
int	ft_iterative_factorial(int nb);

int	main(void)
{
	int	num;

	num = -1;
	printf("Факториал %d равен %d\n", num, ft_iterative_factorial(num));
	num = 0;
	printf("Факториал %d равен %d\n", num, ft_iterative_factorial(num));
	num = 1;
	printf("Факториал %d равен %d\n", num, ft_iterative_factorial(num));
	num = 2;
	printf("Факториал %d равен %d\n", num, ft_iterative_factorial(num));
	num = 3;
	printf("Факториал %d равен %d\n", num, ft_iterative_factorial(num));
	num = 4;
	printf("Факториал %d равен %d\n", num, ft_iterative_factorial(num));
	num = 5;
	printf("Факториал %d равен %d\n", num, ft_iterative_factorial(num));
	return (0);
}
