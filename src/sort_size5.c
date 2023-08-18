#include "../push_swap.h"

void	sort_size5(t_list **stack_a, t_list **stack_b)
{
	size_t	distance;

	if (is_sorted(stack_a))
		return ;
	distance = get_distance_to_min(stack_a, find_min_in_list(stack_a, -1));
	if (distance == 1)
		sa(stack_a);
	else if (distance == 2)
	{
		ra(stack_a);
		ra(stack_a);
	}
	else if (distance == 3)
	{
		rra(stack_a);
		rra(stack_a);
	}
	else if (distance == 4)
		rra(stack_a);
	if (is_sorted(stack_a))
		return ;
	pb(stack_a, stack_b);
	sort_size4(stack_a, stack_b);
	pa(stack_b, stack_a);
}