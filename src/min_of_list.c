#include "../push_swap.h"

int min_of_list(t_list *head)
{
	int min_value;
	t_list *current;

	if (!head)
		return 0;
	min_value = head->data;
	current = head->next;

	while (current)
	{
		if (current->data < min_value)
			min_value = current->data;
		current = current->next;
	}
	return min_value;
}

//int main()
//{
//	t_list node1 = {0, NULL};
//	t_list node2 = {2, NULL};
//	t_list node3 = {8, NULL};
//	t_list node4 = {1, NULL};
//
//	node1.next = &node2;
//	node2.next = &node3;
//	node3.next = &node4;
//
//	int min_value = min_of_list(&node1);
//	if (min_value == INT_MAX)
//		printf("min_value is too big");
//	else
//		printf("the min of list is : %d\n", min_value);
//}

int  find_min_in_list (const t_list *list)
{
	if (!list)
		return 0;
	int min_value = list->data;
	const t_list *current = list->next;
	while (current != NULL)
	{
		if (current->data < min_value)
		{
			min_value = current->data;
		}
		current = current->next;
	}
	return min_value;
	}

		int get_distance_to_min(t_list **stack, int min)
{
	t_list *head;
	int distance;

	head = *stack;
	distance = 0;

	while (head)
	{
		if (head->index == min)
			break;
		distance++;
		head = head->next;
	}
	return distance;
}