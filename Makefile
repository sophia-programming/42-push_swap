NAME	=	push_swap
CC		=	cc
CFLAGS	=	-Wall -Wextra -Werror

SRCS	=	src/main.c\
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
			list/ft_lstnew.c\

OBJS	=	$(SRCS:%.c=%.o)

LIBFTFLAG		=	-L./libft -lft
FT_PRINTFFLAG	=	-L./ft_printf -lftprintf

all: $(NAME)

$(NAME): $(OBJS)
		make -C ./libft
		make -C ./ft_printf
		$(CC) $(CFLAGS) $(OBJS) $(LIBFTFLAG) $(FT_PRINTFFLAG) -o $(NAME)

lib:
	make -C ./libft

ft_printf:
	make -C ./ft_printf

clean :
		make -C ./libft clean
		make -C ./ft_printf clean
		$(RM) $(OBJS)

fclean: clean
		make -C ./libft fclean
		make -C ./ft_printf fclean
		$(RM) $(NAME) $(OBJS)

re: fclean all

test: all
	@chmod +x ./test.sh
	@./test.sh

re : all clean fclean re lib ft_printf
