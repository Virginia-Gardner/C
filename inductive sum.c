# include <stdio.h>

int	main(int argc, char* intv[])
{
	int x;
	scanf("%d", &x);

	int n=0;
	while (x)
	{
		int digit = x%10;
		/*n += 1;  подсчет кол-ва символов */
		n += digit; /* - посдчет суммы цифр */ 

		x /= 10;
	}
	printf("result = %d", n);

	return 0;
}
