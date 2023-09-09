/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaoba <oaoba@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 00:20:50 by oaoba             #+#    #+#             */
/*   Updated: 2023/08/27 00:20:55 by oaoba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_isspace_atoll(char c)
{
	return (c == '\t' || c == '\n' || c == '\v' || c == '\f' || \
	c == '\r' || c == ' ');
}

int64_t	ft_atoll(char *str)
{
	int64_t	ret;
	int8_t	flag;
	int		i;

	ret = 0;
	flag = 1;
	i = 0;
	while (ft_isspace_atoll(str[i]))
		i++;
	if (str[i] == '-')
	{
		flag = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] && '0' <= str[i] && str[i] <= '9')
	{
		ret = ret * 10 + str[i] - '0';
		i++;
	}
	return (ret * flag);
}
