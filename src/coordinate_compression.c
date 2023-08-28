/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coordinate_compression.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaoba <oaoba@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 15:32:05 by oaoba             #+#    #+#             */
/*   Updated: 2023/08/28 15:32:12 by oaoba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "../include/push_swap.h"

void	compress_indexes_in_stack(t_list **stack, size_t index)
{
	t_list	*node;
	t_list	*data_min_node;

	data_min_node = NULL;
	node = *stack;
	while (node)
	{
		if ((node->index == -1) && \
		(data_min_node == NULL || node->data < data_min_node->data))
			data_min_node = node;
		node = node->next;
	}
	if (data_min_node)
		data_min_node->index = index;
}

void	coordinate_compression(t_list **stack)
{
	size_t	index;

	index = 0;
	while (index < ft_lstsize(stack))
	{
		compress_indexes_in_stack(stack, index);
		index++;
	}
}
