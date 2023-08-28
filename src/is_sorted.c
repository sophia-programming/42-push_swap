/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaoba <oaoba@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 00:19:06 by oaoba             #+#    #+#             */
/*   Updated: 2023/08/28 15:38:05 by oaoba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

bool	is_sorted(t_list **stack)
{
	t_list	*node;

	node = *stack;
	while (node && node->next)
	{
		if (node->data <= node->next->data)
			node = node->next;
		else
			return (false);
	}
	return (true);
}
