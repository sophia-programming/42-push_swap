/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaoba <oaoba@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 16:34:49 by oaoba             #+#    #+#             */
/*   Updated: 2023/08/19 16:34:53 by oaoba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

size_t	ft_lstsize(t_list **lst)
{
	size_t	size;
	t_list	*tmp;

	size = 0;
	tmp = *lst;
	while (tmp)
	{
		tmp = tmp->next;
		size++;
	}
	return (size);
}
