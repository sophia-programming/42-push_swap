/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaoba <oaoba@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 16:36:59 by oaoba             #+#    #+#             */
/*   Updated: 2023/08/19 16:37:39 by oaoba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

bool	rotate(t_list **stack)
{
	t_list	*head;
	t_list	*end;

	if (ft_lstsize(stack) < 2)
		return (false);
	head = *stack;
	end = ft_lstlast(stack);
	*stack = head->next;
	end->next = head;
	return (true);
}

bool	ra(t_list **stack_a)
{
	if (rotate(stack_a) == false)
		return (false);
	ft_putendl_fd("ra", 1);
	return (true);
}

bool	rb(t_list **stack_b)
{
	if (rotate(stack_b) == false)
		return (false);
	ft_putendl_fd("rb", 1);
	return (true);
}

bool	rr(t_list **stack_a, t_list **stack_b)
{
	if (rotate(stack_a) == false || rotate(stack_b) == false)
		return (false);
	ft_putendl_fd("rr", 1);
	return (true);
}
