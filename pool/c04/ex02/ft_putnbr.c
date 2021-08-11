/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnidia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 14:08:32 by bnidia            #+#    #+#             */
/*   Updated: 2021/07/12 16:28:14 by bnidia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	recur(int number);

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	recur(nb);
}

void	recur(int number)
{
	int	d;

	if (number < 10)
	{
		d = number + 48;
		write(1, &d, 1);
		return ;
	}
	else
	{
		recur(number / 10);
		d = number % 10 + 48;
		write(1, &d, 1);
	}
}
