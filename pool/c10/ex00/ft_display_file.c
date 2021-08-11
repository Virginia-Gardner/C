#include "ft_lib.h"
#define SIZE 30000

int		check_arg(int arg);
int		openfile(char *filename);
void	print_buffer(char *buffer);

int	main(int argc, char *argv[])
{
	int		fd;
	char	buffer[SIZE + 1];
	int		r;

	if (check_arg(argc) == 1)
		return (1);
	fd = openfile(argv[1]);
	r = 1;
	while (r == 1)
	{
		r = read(fd, buffer, SIZE);
		if (r == -1)
		{
			write(1, "Cannot read file.", 17);
			break ;
		}
		print_buffer(buffer);
	}
	if (close(fd) == -1)
		write(1, "Cannot read file.\n", 18);
	else
		write(1, "\n", 1);
}

int	check_arg(int argc)
{
	if (argc == 1)
		write(1, "File name missing.\n", 19);
	if (argc > 2)
		write(1, "Too many arguments.\n", 20);
	if (argc == 1 || argc > 2)
		return (1);
	return (0);
}

int	openfile(char *filename)
{
	int	fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		write(1, "Cannot read file.", 17);
		return (1);
	}
	return (fd);
}

void	print_buffer(char *buffer)
{	
	int	i;

	i = 0;
	while (buffer[i])
		i++;
	write(1, buffer, i);
}
