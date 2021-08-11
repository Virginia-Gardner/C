#include <stdio.h>

int ft_str_is_printable(char *str);

int	main(void)
{
	char	str1[1] = {15};
	printf("%d\n", ft_str_is_printable(str1));
	char	str2[] = "STsd";
	printf("%d\n", ft_str_is_printable(str2));
	char	str3[] = "";
	printf("%d\n", ft_str_is_printable(str3));
	return (0);
}
