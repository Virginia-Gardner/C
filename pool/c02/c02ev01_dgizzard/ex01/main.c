#include <stdio.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char dest[] = "zxczxc";
	char src[] = "qwe";


	printf("%s\n\n", ft_strncpy(dest, src, 12));
	printf("%s\n", dest);
	return (0);
}
