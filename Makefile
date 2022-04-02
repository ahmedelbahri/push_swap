# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahel-bah <ahel-bah@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/28 01:00:55 by ahel-bah          #+#    #+#              #
#    Updated: 2022/04/02 01:51:33 by ahel-bah         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

NAME_2 = checker

SRC = push_swap.c utils/content/ft_push.c utils/content/ft_revrotate.c \
	  utils/content/ft_rotate.c utils/content/ft_swap.c \
	  utils/errors/arg_check.c utils/errors/ft_error.c \
	  utils/include/ft_atoi.c utils/include/ft_lstadd_back.c \
	  utils/include/ft_lstadd_front.c utils/include/ft_lstlast.c \
	  utils/include/ft_lstnew.c utils/include/ft_strcmp.c \
	  utils/include/ft_strlen.c utils/tools/ft_freelist.c \
	  utils/tools/ft_index.c utils/tools/ft_lis_data.c utils/tools/ft_lis.c \
	  utils/tools/ft_lstlen.c utils/tools/ft_push_to_b.c \
	  utils/tools/ft_previous.c utils/tools/push_to_a/ft_biggest.c \
	  utils/tools/push_to_a/ft_his_brother.c \
	  utils/tools/push_to_a/ft_theleast.c \
	  utils/tools/push_to_a/ft_move_count.c \
	  utils/tools/push_to_a/ft_push_to_a.c \
	  utils/tools/push_to_a/ft_smallest.c

OBJ = $(SRC:.c=.o)

SRC_BNS = checker_bonus/checker.c \
		  checker_bonus/utils/content/ft_push.c \
		  checker_bonus/utils/content/ft_revrotate.c \
		  checker_bonus/utils/content/ft_rotate.c \
		  checker_bonus/utils/content/ft_swap.c \
		  checker_bonus/get_next_line/get_next_line.c \
		  checker_bonus/get_next_line/get_next_line_utils.c \
		  checker_bonus/utils/errors/arg_check.c \
		  checker_bonus/utils/errors/ft_error.c \
		  checker_bonus/utils/include/ft_atoi.c \
		  checker_bonus/utils/include/ft_lstadd_back.c \
		  checker_bonus/utils/include/ft_lstadd_front.c \
		  checker_bonus/utils/include/ft_lstlast.c \
		  checker_bonus/utils/include/ft_lstnew.c \
		  checker_bonus/utils/include/ft_strcmp.c \
		  checker_bonus/utils/include/ft_strlen.c

OBJ_BNS = $(SRC_BNS:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

bonus: $(NAME_2)

$(NAME_2): $(OBJ_BNS)
	$(CC) $(CFLAGS) $(OBJ_BNS) -o $(NAME_2)

clean:
	rm -f $(OBJ) $(OBJ_BNS)

fclean: clean
	rm -f $(NAME) $(NAME_2)

re: fclean all
