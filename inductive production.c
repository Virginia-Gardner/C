# include <stdio.h>

int	main(int argc, char* intv[])
{
	int x;
	scanf("%d", &x);

	int n = 1;
	while (x)
	{
		int digit = x%10;
		/*n += 1;  ������� ���-�� �������� */
		/*n += digit - ������� ����� ���� */ 
		n *= digit; /* ������������ ������ ����� */

		x /= 10;
	}
	printf("result = %d", n);

	return 0;
}
