#include "../push_swap.h"

typedef struct s_list
{
	int              data;
	void             *content;
	struct s_list    *next;
} t_list;

void push(t_list **stack_from, t_list **stack_to)
{
	t_list *head_from;
	t_list *head_to;
	t_list *tmp;

	head_from = *stack_from;
	head_to = *stack_to;
	tmp = *stack_from;
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

	int i = 5;
	while (1 <= i)
	{
		t_list *new_node = malloc(sizeof(t_list));
		if (!new_node)
			return 0;
		new_node->data = i;
		new_node->next = stack_from;
		stack_from = new_node;

		i--;
	}
	push(&stack_from, &stack_to);
	t_list *current = stack_to;
	printf("stack_to: ");
	while (current)
	{
		printf("%d ", current->data);
		current = current->next;
	}
}