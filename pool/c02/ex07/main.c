#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char str[] = "fwsR";
	printf("Было fwsR, стало - %s\n", ft_strupcase(str));
}
