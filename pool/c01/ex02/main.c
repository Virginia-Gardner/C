#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 21;
	b = 42;
	printf("Значение а = %d\n", a);
	printf("Значение b = %d\n", b);
	ft_swap(&a, &b);
	printf("Значение а = %d\n", a);
	printf("Значение b = %d\n", b);
}
