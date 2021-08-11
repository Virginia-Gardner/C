#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	i;

	i = 21;
	printf("%d", i);
	printf("\n");
	ft_ft(&i);
	printf("%d", i);
	printf("\n");
	printf("%p", &i);
	printf("\n");
	write(1, &i, 10);
	printf("\n");
	write(1, &i, 10);
}
