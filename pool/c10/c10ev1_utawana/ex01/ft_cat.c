/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utawana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 14:27:10 by utawana           #+#    #+#             */
/*   Updated: 2021/07/19 20:27:35 by utawana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>

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

void	f_osh(int nb, char *elem)
{
	errno = nb;
	ft_putstr("cat: ");
	ft_putstr(elem);
	ft_putstr(": ");
	ft_putstr(strerror(errno));
	ft_putstr("\n");
}

int	f_vyvod(char *argv, char *buf)
{
	int	fl;
	int	red;

	fl = open(argv, O_RDONLY);
	red = read(fl, buf, (30000));
	if (fl < 0)
	{
		f_osh(ENOENT, argv);
		return (1);
	}
	if (red < 0)
	{
		f_osh(EISDIR, argv);
		return (1);
	}
	buf[red] = '\0';
	ft_putstr(buf);
	return (0);
}

int	main(int argc, char **argv)
{
	int		i;
	char	buf[30000 +1];

	i = 1;
	if (argc < 2)
	{
		while (read(1, buf, 1))
			write(1, buf, 1);
	}
	while (i < argc)
	{
		f_vyvod(argv[i], buf);
		i++;
	}
	return (0);
}
