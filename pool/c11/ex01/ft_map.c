#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	i;
	int	*mymap;

	mymap = (int *)malloc(sizeof(*tab) * length);
	if (mymap == ((void *)0))
		return ((void *)0);
	i = 0;
	while (i < length)
	{	
		mymap[i] = f(tab[i]);
		i++;
	}
	return (mymap);
}
