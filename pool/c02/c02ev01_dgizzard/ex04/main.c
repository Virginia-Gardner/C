#include <stdio.h>

int ft_str_is_lowercase(char *str);

int	main(void)
{
	char	str1[] = "asd";
	printf("%d\n", ft_str_is_lowercase(str1));
	char	str2[] = "aTsd";
	printf("%d\n", ft_str_is_lowercase(str2));
	char	str3[] = "";
	printf("%d\n", ft_str_is_lowercase(str3));
	return (0);
}
