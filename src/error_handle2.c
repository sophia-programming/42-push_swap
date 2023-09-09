/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handle2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaoba <oaoba@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 22:44:27 by oaoba             #+#    #+#             */
/*   Updated: 2023/09/09 22:44:27 by oaoba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	check_args(char **args, int start)
{
	int		i;
	int		num;

	i = start;
	while (args[i])
	{
		if (!check_isnum(args[i]))
			put_error("Error");
		if (!check_in_int(args[i]))
			put_error("Error");
		num = ft_atoi(args[i]);
		if (check_duplicate(args, num, i))
			put_error("Error");
		i++;
	}
}
