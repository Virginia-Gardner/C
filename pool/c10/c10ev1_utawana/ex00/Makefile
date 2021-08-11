# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: utawana <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/19 11:32:28 by utawana           #+#    #+#              #
#    Updated: 2021/07/19 14:26:27 by utawana          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

OBJS = *.o

all:
	gcc -Wall -Werror -Wextra -c ft_display_file.c
	gcc -Wall -Werror -Wextra -o ft_display_file ft_display_file.o

${NAME}:  all

clean:
	rm ${OBJS}

fclean: clean
	rm ${NAME}
