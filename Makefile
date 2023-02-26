# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdoumi <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/27 10:28:15 by mdoumi            #+#    #+#              #
#    Updated: 2023/02/26 11:08:36 by mdoumi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
BNAME = checker

SRCS =	algo.c \
		commands.c \
		commands2.c \
		commands3.c \
		push_swap.c \
		push.c \
		ft_split.c \
		utils.c \
		utils2.c \
		get_next_line/get_next_line_utils_bonus.c

BSRCS =	checker.c \
		get_next_line/get_next_line_bonus.c \
		get_next_line/get_next_line_utils_bonus.c \
		algo.c \
		commands.c \
		commands2.c \
		commands3.c \
		push.c \
		utils.c \
		utils2.c \
		ft_split.c \

GCC = gcc -Wall -Wextra -Werror

$(NAME):
		$(GCC) $(SRCS) -o $(NAME)

all: $(NAME)

bonus:
		$(GCC) $(BSRCS) -o $(BNAME)

clean:
		rm -rf $(OBJS)

fclean: clean
		rm -rf $(NAME)
		rm -rf $(BNAME)

re:	fclean all
