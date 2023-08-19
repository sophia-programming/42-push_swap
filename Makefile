# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oaoba <oaoba@student.42tokyo.jp>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/19 16:37:24 by oaoba             #+#    #+#              #
#    Updated: 2023/08/19 16:37:39 by oaoba            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	push_swap
CC		=	cc
DEBUGFLAGS	=	-g3 -fsanitize=address
CFLAGS	=	-Wall -Wextra -Werror $(DEBUGFLAGS)

SRCS	=	src/error.c\
			src/free.c\
			src/is_sorted.c\
			src/list_min_utils.c\
			src/main.c\
			src/push.c\
			src/radix.c\
			src/reverse_rotate.c\
			src/rotate.c\
			src/sort_size3.c\
			src/sort_size4.c\
			src/sort_size5.c\
			src/sort_under_5.c\
			src/swap.c\
			src/update_index.c\
			list/ft_lstadd_back.c\
			list/ft_lstadd_front.c\
			list/ft_lstlast.c\
			list/ft_lstnew.c\
			list/ft_lstsize.c
			
OBJS	=	$(SRCS:%.c=%.o)

LIBFTFLAG		=	-L./libft -lft
FT_PRINTFFLAG	=	-L./ft_printf -lftprintf
		
all: $(NAME)

$(NAME): $(OBJS)
	make -C ./libft
	make -C ./ft_printf
	$(CC) $(CFLAGS) $(OBJS) $(LIBFTFLAG) $(FT_PRINTFFLAG) -o  $(NAME)

lib:
	make -C ./libft
	
ft_printf:
	make -C ./ft_printf

.c.o:
	$(CC) $(CFLAGS) -I include -c $< -o $@

clean:
	make -C ./libft clean
	make -C ./ft_printf clean
	$(RM) $(OBJS)

fclean:	clean
	make -C ./libft fclean
	make -C ./ft_printf fclean
	$(RM) $(NAME) $(OBJS)

re:		fclean all

test: all
	@chmod +x ./test.sh
	@./test.sh

.PHONY:	all clean fclean re lib ft_printf
