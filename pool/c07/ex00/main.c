#include <stdio.h>

char	*ft_strdup(char *src);

int	main(void)
{
	char	*str;

	str = "0123456789";
	printf("Дубликат: %s\n", ft_strdup(str));
}
