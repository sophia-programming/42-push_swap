/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaoba <oaoba@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 00:19:34 by oaoba             #+#    #+#             */
/*   Updated: 2023/08/29 14:50:44 by oaoba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	count_max_bits(t_list **stack)
{
	t_list	*node;
	int		max_index;
	int		max_bits;

	node = *stack;
	max_index = (*stack)->index;
	max_bits = 0;
	while (node)
	{
		if (max_index < node->index)
			max_index = node->index;
		node = node->next;
	}
	while ((max_index >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

void	handle_process_bits(t_list **stack_a, t_list **stack_b, \
					size_t sizeof_stack_a, size_t max_bits)
{
	t_list	*head_of_stack_a;
	size_t	i;
	size_t	j;

	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j < sizeof_stack_a)
		{
			head_of_stack_a = *stack_a;
			if ((head_of_stack_a->index >> i) & 1)
				ra(stack_a);
			else
				pb(stack_b, stack_a);
			j++;
		}
		while (ft_lstsize(stack_b) != 0)
			pa(stack_a, stack_b);
		i++;
	}
}

void	radix_sort(t_list **stack_a, t_list **stack_b)
{
	size_t	sizeof_stack_a;
	int		max_bits;

	sizeof_stack_a = ft_lstsize(stack_a);
	max_bits = count_max_bits(stack_a);
	handle_process_bits(stack_a, stack_b, sizeof_stack_a, max_bits);
}
