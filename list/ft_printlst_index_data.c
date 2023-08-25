#include "../include/push_swap.h"

void	ft_printlst_index_data(t_list **list)
{
	t_list	*tmp;

	tmp = *list;
	ft_printf("---\n");
	while (tmp)
	{
		ft_printf("data = %d, index = %d\n", tmp->data, tmp->index);
		tmp = tmp->next;
	}
	ft_printf("---\n");
}
