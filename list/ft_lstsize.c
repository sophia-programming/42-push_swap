/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaoba <oaoba@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 00:22:52 by oaoba             #+#    #+#             */
/*   Updated: 2023/08/27 00:22:52 by oaoba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

size_t	ft_lstsize(t_list **list)
{
	size_t	i;
	t_list	*tmp;

	i = 0;
	tmp = *list;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}
