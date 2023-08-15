#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "../libft/libft.h"
#include "../ft_printf/new_printf/ft_printf.h"

//
//typedef struct s_list
//{
//	int				data;
//	struct s_list	*next;
//	int				index;
//}t_list;

void swap(t_list **stack);
void put_error(char *str);
int Check_If_INT(long long num);

#endif