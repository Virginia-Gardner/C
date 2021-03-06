/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cskipjac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 11:54:12 by cskipjac          #+#    #+#             */
/*   Updated: 2021/07/10 12:46:54 by cskipjac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int		i;
	int		j;

	i = 0;
	j = 1;
	if (str[i] != '\0')
	{
		while (str[i] != '\0')
		{
			if (str[i] >= 0 & str[i] < 65)
				j = 0;
			if (str[i] >= 91 & str[i] <= 96)
				j = 0;
			if (str[i] >= 123 & str[i] <= 127)
				j = 0;
			i++;
		}
	}
	return (j);
}
