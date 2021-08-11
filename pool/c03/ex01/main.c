#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char t1[] = "abc";
	char t2[] = "abd";
	char t3[] = "ab\0";
	char t4[] = "ab\200";
	unsigned int n = 4;
	printf("%s, %s, %d, %d\n", t1, t2, ft_strncmp(t1, t2, n), strncmp(t1, t2, n));
	printf("%s, %s, %d, %d\n", t2, t3, ft_strncmp(t2, t3, n), strncmp(t2, t3, n));
	printf("%s, %s, %d, %d\n", t3, t4, ft_strncmp(t3, t4, n), strncmp(t3, t4, n));
	printf("--------\n");
	

}
