# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adrean <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/11 14:44:45 by adrean            #+#    #+#              #
#    Updated: 2018/09/11 14:54:08 by adrean           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = b_libft
SRC = ft_*.c
OUT = ft_*.o
OUTLIB = libft.a
FLAGS = -Wall -Wextra -Werror -c

$(NAME): all

all:
	gcc $(FLAGS) $(SRC)
	ar rcs $(OUTLIB) $(OUT)

clean:
	rm $(OUT)

fclean: clean
	rm $(OUTLIB)

re: fclean all
	

