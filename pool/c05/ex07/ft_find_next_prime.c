/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnidia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 17:31:57 by bnidia            #+#    #+#             */
/*   Updated: 2021/07/13 19:36:35 by bnidia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb);

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
	{
		nb++;
	}
	return (nb);
}

int	ft_is_prime(int nb)
{
	int	i;
	int	nb2;

	i = 2;
	nb2 = nb / 2 + 1;
	if (nb < 2)
		return (0);
	while (i < nb2)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
