# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oaoba <oaoba@student.42tokyo.jp>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/27 00:21:48 by oaoba             #+#    #+#              #
#    Updated: 2023/08/28 13:07:21 by oaoba            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	push_swap
CC		=	cc
CFLAGS	=	-Wall -Wextra -Werror

srcs	=	src/main.c\
 			src/rotate.c\
 			src/sort_under_5.c\
 			src/sort_size3.c\
 			src/sort_size4.c\
 			src/sort_size5.c\
			src/update_index.c\
			src/push.c\
			src/list_min_utils.c\
			src/free.c\
			src/radix.c\
			src/swap.c\
			src/is_sorted.c\
			src/reverse_rotate.c\
			src/error_handle.c\
			src/utils.c\
			list/ft_lstadd_back.c\
			list/ft_lstlast.c\
			list/ft_lstsize.c\
			list/ft_lstadd_front.c\
			list/ft_lstnew.c

objs	=	$(srcs:%.c=%.o)

libftflag		=	-L./libft -lft
ft_printfflag	=	-L./ft_printf -lftprintf

all: $(NAME)

$(NAME): $(objs)
		make -C ./libft
		make -C ./ft_printf
		$(CC) $(CFLAGS) $(objs) $(libftflag) $(ft_printfflag) -o $(NAME)

libft:
	make -C ./libft

ft_printf:
	make -C ./ft_printf

clean :
		make -C ./libft clean
		make -C ./ft_printf clean
		$(RM) $(objs)

fclean: clean
		make -C ./libft fclean
		make -C ./ft_printf fclean
		$(RM) $(NAME) $(objs)

re: fclean all

.PHONY : all clean fclean re libft ft_printf
