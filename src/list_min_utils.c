#include "../push_swap.h"

int  find_min_in_list (t_list *list)
{
	size_t	min_value;
	t_list *current_node;

	if (!head)
		return 0;
	min_value = head->data;
	current_node = head->next;

	while (current_node)
	{
		if (current_node->data < min_value)
			min_value = current_node->data;
		current_node = current_node->next;
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

int get_distance_to_min(t_list **stack, int min)
{
	t_list	*head;
	size_t	distance;

	head = *stack;
	distance = 0;

	while (head)
	{
		if (head->index == min)
			break;
		distance++;
		head = head->next;
	}
	return (distance);
}
