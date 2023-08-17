#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "../libft/libft.h"
#include "../ft_printf/new_printf/ft_printf.h"


typedef struct s_list
{
	int				data;
	struct s_list	*next;
}t_list;

void swap(t_list **stack);
void put_error(char *str);
bool Check_If_INT(long long num);
void sort_size3(t_list **stack_a);
void sa(t_list **stack_a);
void sb(t_list **stack_b);
void push(t_list **stack_from, t_list **stack_to);

#endif