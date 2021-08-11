#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 42;
	b = 21;
	ft_ultimate_div_mod(&a, &b);
	printf("результат деления %d, остаток от деления %d", a, b);
	return (0);
}
