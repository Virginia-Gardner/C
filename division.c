#include <stdio.h>

int	main(int argc, char* argv[])
{
	int x = 12345;
	/* %d - digit, \n - ������� �������*/
	while (x != 0){
	printf(%d %d\n, x/10, x%10);
	x /= 10;
	}
	double x = 1./2. /* 1. - ��� �� ��������� ��� ����� �� int */
	return 0;
}
