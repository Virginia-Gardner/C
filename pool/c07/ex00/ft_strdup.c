/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnidia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 15:07:43 by bnidia            #+#    #+#             */
/*   Updated: 2021/07/16 21:19:07 by bnidia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		l;
	char	*dest;

	l = 0;
	while (src[l])
		l++;
	dest = malloc(sizeof(*src) * (l + 1));
	if (dest == (void *) 0)
		return (((void *)0));
	while (l >= 0)
	{
		dest[l] = src[l];
		l--;
	}
	return (dest);
}
