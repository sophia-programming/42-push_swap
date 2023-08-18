#include "../push_swap.h"

void sort_under_5(t_list **stack_a, t_list **stack_b)
{
	size_t	lst_size;

	lst_size = ft_lstsize(stack_a);
	if (lst_size == 2)
		sa(stack_a);
	else if (lst_size == 3)
		sort_size3(stack_a);
	else if (lst_size == 4)
		sort_size4(stack_a, stack_b);
	else if (lst_size == 5)
		sort_size5(stack_a, stack_b);
}
