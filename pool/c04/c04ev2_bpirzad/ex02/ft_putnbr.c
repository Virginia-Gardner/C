#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	k;

	if (nb < 0 && nb != -2147483647 - 1)
	{
		nb = -nb;
		write(1, "-", 2);
	}
	 if (nb == -2147483647 - 1)
	{
		write(1, "-2147483648", 13);
	}
	else if (nb < 10)
	{
		k = nb +'0';
		write (1, &k, 1);
	}
	else
	{		
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}
