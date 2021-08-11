#include <stdio.h>

int ft_str_is_alpha(char *str);

int	main(void)
{
	char stri[] = "qwert";
	printf("qwert - %d\n", ft_str_is_alpha(stri));
	char strin[] = "qwe-rt";
	printf("qwe-rt - %d\n", ft_str_is_alpha(strin));
	char strim[] = "";
	printf("пусто - %d\n", ft_str_is_alpha(strim));
	return (0);
}
