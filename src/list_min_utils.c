/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_min_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaoba <oaoba@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 00:19:13 by oaoba             #+#    #+#             */
/*   Updated: 2023/08/27 00:19:13 by oaoba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	find_min_in_list(t_list **stack, int min_valid)
{
	t_list	*head;
	int		min;

	head = *stack;
	min = head->index;
	while (head->next)
	{
		head = head->next;
		if ((head->index < min) && head->index != min_valid)
			min = head->index;
	}
	return (min);
}

int	get_distance_to_min(t_list **stack, int min)
{
	t_list	*head;
	int		distance;

	distance = 0;
	head = *stack;
	while (head)
	{
		if (head->index == min)
			break ;
		distance++;
		head = head->next;
	}
	return (distance);
}
