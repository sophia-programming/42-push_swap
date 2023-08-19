/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_min_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaoba <oaoba@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 16:36:42 by oaoba             #+#    #+#             */
/*   Updated: 2023/08/19 16:37:39 by oaoba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	find_min_in_list(t_list **list, int	min_value)
{
	t_list	*current_node;
	int		min;

	current_node = *list;
	min = current_node->index;
	while (current_node)
	{
		if ((current_node->index < min) && current_node->index != min_value)
			min = current_node->index;
		current_node = current_node->next;
	}
	return (min);
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

int	get_distance_to_min(t_list **stack, int min)
{
	t_list	*head;
	size_t	distance;

	head = *stack;
	distance = 0;
	while (head)
	{
		if (head->index == min)
			break ;
		distance++;
		head = head->next;
	}
	return (distance);
}
