#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	div;
	int	mod;

	div = 0;
	mod = 0;
	ft_div_mod(10, 5, &div, &mod);
	printf("результат деления %d, остаток от деления %d", div, mod);
	return (0);
}
