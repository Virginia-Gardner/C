#include <stdio.h>

int	ft_atoi(char *str);

int	main(void)
{
	char	t1[] = "  ---+--+1234ab-567";

	printf("передали \n%s\n", t1);
	printf("%d\n", ft_atoi(t1));
}
