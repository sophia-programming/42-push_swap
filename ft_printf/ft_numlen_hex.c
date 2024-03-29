/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlen_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaoba <oaoba@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 13:51:58 by oaoba             #+#    #+#             */
/*   Updated: 2023/04/09 13:52:38 by oaoba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_numlen_hex(uint64_t nb)
{
	int	len;

	len = 0;
	if (nb == 0)
		len = 1;
	while (nb != 0)
	{
		len++;
		nb /= 16;
	}
	return (len);
}
