/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnidia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 14:07:53 by bnidia            #+#    #+#             */
/*   Updated: 2021/07/08 19:14:54 by bnidia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	compare(int a, int b, int c);

void	ft_print_comb(void)
{
	int	num[3];

	num[0] = '0';
	while (num[0] <= '9')
	{
		num[1] = '0';
		while (num[1] <= '9')
		{
			num[2] = '0';
			while (num[2] <= '9')
			{
				compare(num[0], num[1], num[2]);
				num[2]++;
			}
			num[1]++;
		}
		num[0]++;
	}
}

void	compare(int a, int b, int c)
{
	if (a < b && b < c)
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, &c, 1);
		if (a == '7' && b == '8' && c == '9')
		{
		}
		else
		{
			write(1, ", ", 2);
		}
	}
}
