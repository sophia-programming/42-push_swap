#include "../include/push_swap.h"

void	reverse_rotate(t_list **stack)
{
	t_list	*head;
	t_list	*end;

	head = *stack;
	end = ft_lstlast(stack);

//	if (ft_lstsize(stack) < 2)
//		return (-1);

	while (head)
	{
		if (head->next->next == NULL)
		{
			head->next = NULL;
			break ;
		}
		head = head->next;
	}
	end->next = *stack;
	*stack = end;
}

void	rra(t_list **stack_a)
{
	reverse_rotate(stack_a);
	ft_putendl_fd("rra", 1);
}

void	rrb(t_list **stack_b)
{
	reverse_rotate(stack_b);
	ft_putendl_fd("rrb", 1);
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	ft_putendl_fd("rrr", 1);
}
