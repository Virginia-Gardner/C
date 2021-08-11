#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	t1[] = "a";
	char	t2[] = "123456*-+ ";
	char	t3[] = "\200";

	printf("Длина строки должна быть %lu  вывод - %d\n",
		   	strlen(t1), ft_strlen(t1));
	printf("Длина строки должна быть %lu вывод - %d\n",
		   	strlen(t2), ft_strlen(t2));
	printf("Длина строки должна быть %lu вывод - %d\n",
		   	strlen(t3), ft_strlen(t3));
	return (0);
}
