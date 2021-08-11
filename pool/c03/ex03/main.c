#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main(void)
{
	char    t1[10] = "abc";
	char    t2[] = "***";
	char    t3[10] = "abc";
	char    t4[] = "*";

	printf("%s, %s, %s\n", t1, t2, strncat(t1, t2, 5));
	printf("%s, %s, %s\n", t3, t4, ft_strncat(t3, t4, 1));
	return (0);
}
