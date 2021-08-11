#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)

{
	char	source[] = "qwerty";
	char	copy[] = {};

	
	printf("%s\n", source);
	ft_strcpy(copy, source);
	printf("%s\n", copy);
}


