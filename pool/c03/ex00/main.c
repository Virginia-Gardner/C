#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	t1[] = "qwerty";
	char	t2[] = "qwertz";
	char	t3[] = "qwertzz";
	char	t4[] = "";
	printf("%s, %s, %d, %d\n", t1, t2, ft_strcmp(t1, t2), strcmp(t1, t2));
	printf("%s, %s, %d, %d\n", t2, t3, ft_strcmp(t2, t3), strcmp(t2, t3));
	printf("%s, %s, %d, %d\n", t3, t4, ft_strcmp(t3, t4), strcmp(t3, t4));
	printf("%s, %s, %d, %d\n", t4, t1, ft_strcmp(t4, t1), strcmp(t4, t1));
	return (0);
}
