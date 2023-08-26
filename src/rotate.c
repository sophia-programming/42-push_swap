#include "../include/push_swap.h"

bool	rotate(t_list **stack)
{
	t_list	*head;
	t_list	*end;

	if (ft_lstsize(stack) < 2)
		return (false);
	head = *stack;
	end = ft_lstlast(stack);
	*stack = head->next;
	head->next = NULL;//これ入れないと無限ループしてた！！
	end->next = head;
	return (true);
}

void	ra(t_list **stack_a)
{
	rotate(stack_a);
	ft_putendl_fd("ra", 1);
}

void	rb(t_list **stack_b)
{
	rotate(stack_b);
	ft_putendl_fd("rb", 1);
}

void	rr(t_list **stack_a, t_list **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	ft_putendl_fd("rr", 1);
}
