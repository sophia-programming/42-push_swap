/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handle.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaoba <oaoba@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 00:18:43 by oaoba             #+#    #+#             */
/*   Updated: 2023/08/29 13:45:49 by oaoba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	put_error(char *str)
{
	ft_putendl_fd(str, 2);
	exit(0);
}

bool	check_isnum(char *num)
{
	size_t	i;

	i = 0;

	if ((num[0] == '+' || num[0] == '-') && (num[1] == '\0'))
		return (false);
	while (num[i] == '-' || num[i] == '+')
	{
		i++;
		if (i == 2)
			return (false);
	 }
	while (num[i])
	{
		if (!ft_isdigit(num[i]))
			return (false);
		i++;
	}
	return (true);
}

bool	check_duplicates(char **args, int num, int i)
{
	i++;
	while (args[i])
	{
		if (ft_atoi(args[i]) == num)
			return (true);
		i++;
	}
	return (false);
}

bool	check_in_int(char *num)
{
	size_t		i;
	long long	lnum;

	i = 0;
	while (num[i])
	{
		if (INT_RANGE < i)
			return (false);
		i++;
	}
	lnum = ft_atoll(num);
	if ((lnum < INT_MIN) || (INT_MAX < lnum))
		return (false);
	return (true);
}

void	check_args(char **args, int start)
{
	int		i;
	int		num;

	i = start;
	while (args [i])
	{
		if (!check_isnum(args[i]))
			put_error("Error");
		num = ft_atoi(args[i]);
		if (!check_in_int(args[i]))
			put_error("Error");
		if (check_duplicates(args, num, i))
			put_error("Error");
		i++;
	}
}
