#include <unistd.h>

void	ft_putchar(int n)
{
	int	i;

	i = n + '0';
	write(1, &i, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "−2147483648", 12);
    
	else
	{
		if (nb < 0)
		{
			nb = nb * -1;
			write(1, "-", 1);
		}
		if (nb < 10)
		{
			ft_putchar(nb);
		}
		else
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
	}
}
