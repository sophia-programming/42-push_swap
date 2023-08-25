#include "../include/push_swap.h"
void	ft_lstadd_back(t_list **list, t_list *new)
{
	t_list	*last;

	if (*list)
	{
		last = ft_lstlast(list);
		last->next = new;
		new->next = NULL;
	}
	else
	{
		*list = new;
		(*list)->next = NULL;
	}
}
