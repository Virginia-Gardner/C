#include <stdio.h>

int ft_str_is_numeric(char *str);

int	main(void)
{
	char num1[] = "032065";
	printf("032065 - %d\n", ft_str_is_numeric(num1));
	char num2[] = "032065d";
	printf("032065d - %d\n", ft_str_is_numeric(num2));
	char num3[] = "";
	printf("пусто - %d\n", ft_str_is_numeric(num3));
}
