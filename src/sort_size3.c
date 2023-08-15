#include "../push_swap.h"

void sort_size3(t_list **stack_a)
{
	t_list	*head;
	head = *stack_a;

	while (head && head->next)
	{
		if ((head->index == min) && (head->next->index != next_min))
		{
			sa(stack_a);
			ra(stack_a);
		}
		else if (head->index == next_min)
		{
			if (head->next == min)
				sa(stack_a);
			else
				rra(stack_a);
		}
		else
		{
			if (head->next->index == min)
				ra(stack_a);
			else
			{
				sa(stack_a);
				rra(stack_a);
			}
		}
	}
}