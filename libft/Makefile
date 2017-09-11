# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fthwala <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/06/02 17:14:07 by fthwala           #+#    #+#              #
#    Updated: 2017/09/09 11:41:15 by fthwala          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAGS = -Wall -Wextra -Werror -I includes

SRC = ft_strlen.c ft_strcmp.c \
	  ft_memcpy.c ft_int_len.c ft_strnew.c \
	  ft_putchar.c ft_putstr.c ft_putendl.c ft_putnbr.c \
	  ft_strjoin.c ft_itoa.c \
 
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	@gcc $(CFLAGS) -c $(SRC)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
