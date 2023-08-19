/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaoba <oaoba@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 16:36:51 by oaoba             #+#    #+#             */
/*   Updated: 2023/08/19 16:37:39 by oaoba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

size_t	count_max_bits(t_list **stack)
{
	t_list	*head;
	size_t	max_index;
	int		max_bits;

	head = *stack;
	max_index = (*stack)->index;
	max_bits = 0;
	while (head)
	{
		if (max_bits < head->index)
			max_bits = head->index;
		head = head->next;
	}
	while ((max_index >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

void	handle_processbits(t_list **stack_a, t_list **stack_b, \
	size_t size_of_stack_a, size_t	max_bits)
{
	t_list	*head_of_stack_a;
	size_t	i;
	size_t	j;

	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j < size_of_stack_a)
		{
			head_of_stack_a = *stack_a;
			if ((head_of_stack_a->index >> i) & 1)
				ra(stack_a);
			else
				pb(stack_a, stack_b);
			j++;
		}
		while (ft_lstsize(stack_b) != 0)
			pa(stack_b, stack_a);
		i++;
	}
}

void	radix_sort(t_list **stack_a, t_list **stack_b)
{
	size_t	size_of_stack_a;
	size_t	max_bits;

	size_of_stack_a = ft_lstsize(stack_a);
	max_bits = count_max_bits(stack_a);
	handle_processbits(stack_a, stack_b, size_of_stack_a, max_bits);
}
