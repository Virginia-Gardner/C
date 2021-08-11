# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: utawana <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/19 11:32:28 by utawana           #+#    #+#              #
#    Updated: 2021/07/21 12:06:24 by bnidia           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat

OBJS = *.o

all:
	gcc -Wall -Werror -Wextra -c ft_cat.c
	gcc -Wall -Werror -Wextra -o ft_cat ft_cat.o

${NAME}: all

clean:
	rm ${OBJS}

fclean: clean
	rm ${NAME}
