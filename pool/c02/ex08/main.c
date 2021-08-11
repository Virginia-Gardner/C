#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char str[] = "fwsR";
	printf("Было fwsR, стало - %s\n", ft_strlowcase(str));
}
