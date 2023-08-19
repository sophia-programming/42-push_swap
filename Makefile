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
CFLAGS	=	-Wall -Werror -Wextra $(DEBUGFLAGS)

SRCS	=	src/error.c\
			free.c\
			is_sorted.c\
			list_min_utils.c\
			main.c\
			push.c\
			radix.c\
			reverse_rotate.c\
			rotate.c\
			sort_size3.c\
			sort_size4.c\
			sort_size5.c\
			sort_under_5.c\
			swap.c\
			update_index.c
			
OBJS	=	$(SRCS:.c=.o)

LIBFT_FLAG	=	-L./libft -lft
FT_PRINTFFLAG	=	-L./ft_printf -lftprintf


all : $(NAME)

$(NAME) : $(OBJS)
		make -C ./libft
		make -C ./ft_printf
		$(CC) $(CFLAGS) $(OBJS) $(LIBFT_FLAG) $(FT_PRINTFFLAG) -o $(NAME)
		
lib :
		make -C ./libft
		
ft_printf :
		make -C ./ft_printf
		
.c.o :
		$(CC) $(CFLAGS) -I include -c $< -o $@
		
clean :
		make -C ./libft clean
		make -C ./ft_printf clean
		$(RM) $(OBJS)
		
fclean : clean
		make -C ./libft fclean
		make -C ./ft_printf fclean
		$(RM) $(NAME) $(OBJS)
		
re :	fclean all

test: all
	@chmod +x ./test.sh
	@./test.sh
	
.PHONY: all clean fclean re lib ft_printf










