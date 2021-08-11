/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnidia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 22:59:58 by bnidia            #+#    #+#             */
/*   Updated: 2021/07/10 23:43:47 by bnidia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	b;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 'a' - 'A';
		b = i - 1;
		if (i == 0 || str[b] == '+' || str[b] == '-' || str[b] == ' ')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 'a' - 'A';
		}
		i++;
	}
	return (str);
}