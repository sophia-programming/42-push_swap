/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaoba <oaoba@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 16:36:29 by oaoba             #+#    #+#             */
/*   Updated: 2023/08/19 16:37:39 by oaoba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	put_error(char *str)
{
	ft_putendl_fd(str, 2);
	exit(0);
}

bool	check_isnumber(char *num)
{
	int	i;

	i = 0;
	while (num[i])
	{
		if (!ft_isdigit(num[i]))
			return (false);
		i++;
	}
	return (true);
}

bool	check_if_int(int64_t num)
{
	if ((INT_MIN < num) || (num < INT_MAX))
		return (true);
	else
		return (false);
}

bool	hasduplicates(int *numbers, size_t	size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = i + 1;
	while (i < (size - 1))
	{
		while (j < (size))
		{
			if (numbers[i] == numbers[j])
				return (true);
			j++;
		}
		i++;
	}
	return (false);
}

void	check_args(char **args, int start)
{
	size_t	num;

	while (args[start])
	{
		if (!check_isnumber(args[start]))
			put_error("Error");
		num = ft_atoi(args[start]);
		if (!check_if_int(num))
			put_error("Error");
		if (hasduplicates((int *)num, start))
			put_error("Error");
		start++;
	}
}
