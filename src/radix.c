#include "../include/push_swap.h"

size_t	count_max_bits(t_list **stack)
{
	t_list	*head;
	size_t	max_index;
	int		max_bits;

	head = *stack;
	max_index = (*stack)->index;
	max_bits = 0;
	while (head)
	{
		if (max_bits < head->index)
			max_index = head->index;
		head = head->next;
	}
	while ((max_index >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

void	handle_processbits(t_list **stack_a, t_list **stack_b, \
					 size_t sizeof_stack_a, size_t max_bits)
{
	t_list	*head_of_stack_a;
	size_t	i;
	size_t	j;

	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j < sizeof_stack_a)
		{
			head_of_stack_a = *stack_a;
			if ((head_of_stack_a->index >> i) & 1)
				ra(stack_a);
			else
				pb(stack_b, stack_a);
			j++;
		}
		while (ft_lstsize(stack_b) != 0)
			pa(stack_a, stack_b);
		i++;
	}
}

void	radix_sort(t_list **stack_a, t_list **stack_b)
{
	size_t	sizeof_stack_a;
	int		max_bits;

	sizeof_stack_a = ft_lstsize(stack_a);
	max_bits = count_max_bits(stack_a);
	handle_processbits(stack_a, stack_b, sizeof_stack_a, max_bits);
}
