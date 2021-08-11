/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnidia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 17:49:23 by bnidia            #+#    #+#             */
/*   Updated: 2021/07/14 18:38:34 by bnidia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int argc, char *argv[]);
int		ft_strcmp(char *s1, char *s2);

int	main(int argc, char *argv[])
{
	int		i;
	char	*c;

	if (argc > 2)
	{
		i = 0;
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				c = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = c;
				i -= 2;
			}
			i++;
		}
		print(argc, argv);
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (!s1[i] || !s2[i])
		return (s1[i] - s2[i]);
	return (0);
}

void	print(int argc, char *argv[])
{
	int	j;
	int	i;

	j = 1;
	while (j < argc)
	{
		i = 0;
		while (argv[j][i])
			i++;
		write(1, argv[j], i);
		write(1, "\n", 1);
		j++;
	}
}
