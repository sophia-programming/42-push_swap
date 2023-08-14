#include "push_swap.h"

void swap(t_list **stack)
{
	t_list *head;
	t_list *next;
	int tmp_data;
	int tmp_index;

	head = *stack;
	next = (*stack)->next;
	tmp_data = head->data;
	head->data = next->data;
	next->data = tmp_data;

	tmp_index = head->index;
	head->index = next->index;
	next->index = tmp->index;
}