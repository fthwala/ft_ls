# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fthwala <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/16 11:47:23 by fthwala           #+#    #+#              #
#    Updated: 2017/09/09 11:55:07 by fthwala          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_ls

SRC = main.c ft_ls.c  list.c ft_do_file_check.c

FLAGS = gcc -Wall -Werror -Wextra -o

all : $(NAME)

$(NAME):
	@echo "Compiling $(NAME)..."
	@make -C libft/
	@$(FLAGS) $(NAME) $(SRC) -L libft/ -lft -I libft/includes -I includes

fclean:
	@echo "Cleaning..."
	@make fclean -C libft/
	@rm -f $(NAME)

re : fclean all

norm:
	@norminette $(SRC) includes/ft_ls.h
