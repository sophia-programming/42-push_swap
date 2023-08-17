#include "../push_swap.h"

void push(t_list **stack_from, t_list **stack_to)
{
	t_list	*tmp;
	t_list	*head_to;
	t_list	*head_from;

	head_to = *stack_to;
	tmp = *stack_from;
	head_from = *stack_from;

	head_from = head_from->next;
	*stack_from = head_from;
	if (!head_to)
	{
		head_to = tmp;
		head_to->next = NULL;
		*stack_to = head_to;
	}
	else
	{
		tmp->next = head_to;
		*stack_to = tmp;
	}
}

int main()
{
	t_list *stack_from = NULL;
	t_list *stack_to = NULL;

	// Create nodes for stack_from
	for (int i = 5; i >= 1; i--)
	{
		t_list *new_node = malloc(sizeof(t_list));
		if (!new_node)
			return 1;
		new_node->data = i;
		new_node->next = stack_from;
		stack_from = new_node;
	}
	// Test the push function
	push(&stack_from, &stack_to);
	// Print stack_to
	t_list *current = stack_to;
	printf("stack_to: ");
	while (current)
	{
		printf("%d\n ", current->data);
		current = current->next;
	}
	// Free memory
	while (stack_from)
	{
		t_list *temp = stack_from;
		stack_from = stack_from->next;
		free(temp);
	}
	while (stack_to)
	{
		t_list *temp = stack_to;
		stack_to = stack_to->next;
		free(temp);
	}
	return 0;
}

void pa(t_list **stack_b, t_list **stack_a)
{
	ft_putendl_fd("pa", 1);
}

void pb(t_list **stack_a, t_list **stack_b)
{
	ft_putendl_fd("pb", 1);
}
