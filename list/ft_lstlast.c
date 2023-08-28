/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaoba <oaoba@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 00:22:37 by oaoba             #+#    #+#             */
/*   Updated: 2023/08/27 00:22:37 by oaoba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_list	*ft_lstlast(t_list **list)
{
	t_list	*tmp;

	tmp = *list;
	while ((tmp)->next)
	{
		tmp = (tmp)->next;
		if ((tmp)->next == NULL)
			return (tmp);
	}
	return (tmp);
}
