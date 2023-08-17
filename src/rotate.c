#include "../push_swap.h"

void rotate(t_list **stack)
{
	t_list *head;
	t_list *end;

	if (ft_lstsize(stack) < 2)
		return ;
	head = *stack;
	end = ft_lstlast(stack);
	*stack = head->next;
	end->next = head;
}

void ra(t_list **stack_a)
{
	rotate(stack_a);
	ft_putendl_fd("ra", 1);
}

void rb(t_list **stack_b)
{
	rotate(stack_b);
	ft_putendl_fd("rb", 1);
}

void rr(t_list **stack_a, t_list **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	ft_putendl_fd("rr", 1);
}

void rotate(t_list **stack)
{
	t_list *head;
	t_list *end;

	head = *stack;
	end = ft_lstlast(stack);
	*stack = head->next;
	head->next = NULL;
	end->next = head;
}

int main()
{
	t_list *stack = NULL;
	// Create nodes for the stack
	for (int i = 1; i <= 5; i++)
	{
		t_list *new_node = malloc(sizeof(t_list));
		if (!new_node)
			return 1;
		new_node->data = i;
		new_node->next = stack;
		stack = new_node;
	}

	printf("Original stack: ");
	t_list *current = stack;
	while (current)
	{
		printf("%d ", current->data);
		current = current->next;
	}
	printf("\n");

	// Test the rotate function
	rotate(&stack);

	printf("Rotated stack: ");
	current = stack;
	while (current)
	{
		printf("%d ", current->data);
		current = current->next;
	}
	printf("\n");

	// Free memory
	while (stack)
	{
		t_list *temp = stack;
		stack = stack->next;
		free(temp);
	}
	return 0;
}