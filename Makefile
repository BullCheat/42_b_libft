# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adrean <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/11 14:44:45 by adrean            #+#    #+#              #
#    Updated: 2018/09/14 17:03:12 by adrean           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ft_memset.c ft_strlen.c ft_strdup.c ft_strcpy.c ft_strncpy.c ft_strchr.c ft_strcmp.c ft_isdigit.c ft_toupper.c ft_tolower.c ft_putchar.c ft_putdigit.c ft_putstr.c ft_putnbr_base.c ft_putnbr.c
OUT = ft_memset.o ft_strlen.o ft_strdup.o ft_strcpy.o ft_strncpy.o ft_strchr.o ft_strcmp.o ft_isdigit.o ft_toupper.o ft_tolower.o ft_putchar.o ft_putdigit.o ft_putstr.o ft_putnbr_base.o ft_putnbr.o
FLAGS = -Wall -Wextra -Werror -c

$(NAME): 
	gcc $(FLAGS) $(SRC)
	ar rcs $(NAME) $(OUT)
	ranlib $(NAME)

all: $(NAME)

clean:
	rm -f $(OUT)

fclean: clean
	rm -f $(NAME)

re: fclean all
	

