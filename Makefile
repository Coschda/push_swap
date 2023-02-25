# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdoumi <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/27 10:28:15 by mdoumi            #+#    #+#              #
#    Updated: 2023/02/25 15:26:09 by mdoumi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
BNAME = checker

SRCS =	algo.c \
		commands.c \
		commands2.c \
		commands3.c \
		min_sort.c \
		push_swap.c \
		push.c \
		utils.c \
		ft_split.c \
		gadjo.c \
		get_next_line/get_next_line_utils_bonus.c

BSRCS =	checker.c \
		get_next_line/get_next_line_bonus.c \
		get_next_line/get_next_line_utils_bonus.c \
		algo.c \
		commands.c \
		commands2.c \
		commands3.c \
		min_sort.c \
		push.c \
		utils.c \
		ft_split.c \
		gadjo.c

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
