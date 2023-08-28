/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaoba <oaoba@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 00:20:33 by oaoba             #+#    #+#             */
/*   Updated: 2023/08/27 00:20:33 by oaoba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	swap(t_list **stack)
{
	t_list	*head;
	t_list	*next;
	int		tmp_data;
	int		tmp_index;

//	if (ft_lstsize(stack) < 2)
//		return (-1);
	head = *stack;
	next = (*stack)->next;
	tmp_data = head->data;
	tmp_index = head->index;
	head->data = next->data;
	head->index = next->index;
	next->data = tmp_data;
	next->index = tmp_index;
}

void	sa(t_list **stack_a)
{
	swap(stack_a);
	ft_putendl_fd("sa", 1);
}

void	sb(t_list **stack_b)
{
	swap(stack_b);
	ft_putendl_fd("sb", 1);
}

void	ss(t_list **stack_a, t_list **stack_b)
{
//	if (ft_lstsize(stack_a) < 2 || ft_lstsize(stack_b) < 2)
//		return (-1);
	swap(stack_a);
	swap(stack_b);
	ft_putendl_fd("ss", 1);
}
