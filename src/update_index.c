#include "../push_swap.h"

void	update_min_index(t_list **stack, size_t index)
{
	t_list	*head;
	t_list	*min;

	min = NULL;
	head = *stack;
	while (head)
	{
		if ((!min || head->data < min->data))
			min = head;
		head = head->next;
	}
	if (min)
		min->index = index;
}

void	update_indexes_of_list(t_list **stack)
{
	size_t	index;
	size_t	lst_size;

	index = 0;
	lst_size = ft_lstsize(stack);
	while (index < lst_size)
	{
		update_min_index(stack, index);
		index++;
	}
}
