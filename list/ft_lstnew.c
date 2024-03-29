/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaoba <oaoba@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 00:22:45 by oaoba             #+#    #+#             */
/*   Updated: 2023/08/27 00:22:45 by oaoba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_list	*ft_lstnew(int data)
{
	t_list	*new;

	new = (t_list *)ft_calloc(1, sizeof(t_list));
	if (!new)
		return (NULL);
	new->data = data;
	new->index = -1;
	new->next = NULL;
	return (new);
}
