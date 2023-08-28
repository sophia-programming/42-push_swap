/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_size4.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaoba <oaoba@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 00:20:06 by oaoba             #+#    #+#             */
/*   Updated: 2023/08/27 00:20:06 by oaoba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sort_size4(t_list **stack_a, t_list **stack_b)
{
	size_t	distance;

	if (is_sorted(stack_a))
		return ;
	distance = get_distance_to_min(stack_a, find_min_in_list(stack_a, -1));
	if (distance == 1)
		ra(stack_a);
	else if (distance == 2)
	{
		ra(stack_a);
		ra(stack_a);
	}
	else if (distance == 3)
		rra(stack_a);
	if (is_sorted(stack_a))
		return ;
	pb(stack_b, stack_a);
	sort_size3(stack_a);
	pa(stack_a, stack_b);
}
