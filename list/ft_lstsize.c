#include "../include/push_swap.h"

size_t	ft_lstsize(t_list **list)
{
	size_t	i;
	t_list	*tmp;

	i = 0;
	tmp = *list;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}
