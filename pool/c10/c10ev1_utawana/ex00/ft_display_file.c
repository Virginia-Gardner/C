/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utawana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 13:55:24 by utawana           #+#    #+#             */
/*   Updated: 2021/07/20 19:43:27 by utawana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		fl;
	int		red;
	char	buf[30000 +1];

	if (argc < 1)
	{
		ft_putstr("File name missing.\n");
		return (1);
	}
	if (argc >2)
	{
		ft_putstr("Too many arguments.\n");
		return (1);
	}
	fl = open(argv[1], O_RDONLY);
	red = read(fl, buf, 30000);
	buf[red] = '\0';
	if (red == -1)
	{
		ft_putstr("Cannot read file.\n");
		return (1);
	}
	ft_putstr(buf);
	return (0);
}
