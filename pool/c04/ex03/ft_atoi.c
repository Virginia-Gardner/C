/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnidia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 16:34:08 by bnidia            #+#    #+#             */
/*   Updated: 2021/07/12 19:27:02 by bnidia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	func_minus(char *str)
{
	int	i;
	int	minus;

	i = 0;
	minus = 0;
	while (str[i])
	{
		if (str[i] > '0' && str[i] < '9')
			break ;
		if (str[i] == '-')
			minus++;
		i++;
	}
	if (minus % 2 == 0)
		minus = 1;
	else
		minus = -1;
	return (minus);
}

int	ft_atoi(char *str)
{
	int	number;

	number = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n'
		|| *str == '\v' || *str == '\f' || *str == '\r'
		|| *str == '-' || *str == '+')
		str++;
	while (*str > '0' && *str < '9')
	{
		number = number * 10 + (int)*str - 48;
		str++;
	}
	return (number * func_minus(str));
}
