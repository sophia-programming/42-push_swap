/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_min_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaoba <oaoba@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 00:19:13 by oaoba             #+#    #+#             */
/*   Updated: 2023/08/29 17:36:57 by oaoba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	find_min_index(t_list **stack, int min_valid)
{
	t_list	*node;
	int		min_index;

	node = *stack;
	min_index = node->index;
	while (node->next)
	{
		node = node->next;
		if (node->index < min_index && node->index != min_valid)
			min_index = node->index;
	}
	return (min_index);
}

int	get_distance_to_min(t_list **stack, int min_data)
{
	t_list	*node;
	int		distance;

	distance = 0;
	node = *stack;
	while (node)
	{
		if (node->index == min_data)
			break ;
		distance++;
		node = node->next;
	}
	return (distance);
}
