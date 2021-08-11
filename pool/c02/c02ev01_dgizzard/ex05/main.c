#include <stdio.h>

int ft_str_is_uppercase(char *str);

int	main(void)
{
	char	str1[] = "ASD";
	printf("%d\n", ft_str_is_uppercase(str1));
	char	str2[] = "STsd";
	printf("%d\n", ft_str_is_uppercase(str2));
	char	str3[] = "";
	printf("%d\n", ft_str_is_uppercase(str3));
	return (0);
}
