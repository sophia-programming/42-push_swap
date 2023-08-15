#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "../libft/libft.h"

typedef struct s_list
{
	int				data;
	struct s_list	*next;
	int				index;
}t_list;

void swap(t_list **stack);

#endif