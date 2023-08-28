/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_size3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaoba <oaoba@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 00:19:59 by oaoba             #+#    #+#             */
/*   Updated: 2023/08/28 18:27:30 by oaoba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	mainlogic_of_sort_size3(t_list **stack_a, t_list *node, int min, int next_min)
{
	if (node->index == min && node->next->index != next_min)
	{
		sa(stack_a);
		ra(stack_a);
	}
	else if (node->index == next_min)
	{
		if (node->next->index == min)
			sa(stack_a);
		else
			rra(stack_a);
	}
	else
	{
		if ((node->next->index == min) && (node->index != next_min))
			ra(stack_a);
		else
		{
			sa(stack_a);
			rra(stack_a);
		}
	}
}

void	sort_size3(t_list **stack_a)
{
	t_list	*node;
	int		min;
	int		next_min;

	node = *stack_a;
	min = find_min_in_list(stack_a, -1);
	next_min = find_min_in_list(stack_a, min);
	if (is_sorted(stack_a))
		return ;
	mainlogic_of_sort_size3(stack_a, node, min, next_min);
}
