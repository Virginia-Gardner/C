#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src);

int main(void)
{
	char    t1[10] = "abc";
	char    t2[] = "*";
	char    t3[10] = "abc";
	char    t4[] = "*";
	printf("%s, %s, %s\n", t1, t2, strcat(t1, t2));
	printf("%s, %s, %s\n", t3, t4, ft_strcat(t3, t4));
	return (0);
}
