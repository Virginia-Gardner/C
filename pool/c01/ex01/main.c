#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int	*********a;
	int	********b;
	int	*******c;
	int	******d;
	int	*****e;
	int	****f;
	int	***g;
	int	**h;
	int	*i;
	int	j;

	j = 21;
	i = &j;
	h = &i;
	g = &h;
	f = &g;
	e = &f;
	d = &e;
	c = &d;
	b = &c;
	a = &b;
	printf("%d", j);
	printf("\n");
	ft_ultimate_ft(a);
	printf("%d", j);
	printf("\n");
}
