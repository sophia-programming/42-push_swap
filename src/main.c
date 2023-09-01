/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaoba <oaoba@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 00:19:20 by oaoba             #+#    #+#             */
/*   Updated: 2023/08/30 00:05:01 by oaoba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sort(t_list **stack_a, t_list **stack_b)
{
	if (ft_lstsize(stack_a) <= 5)
		sort_under_5(stack_a, stack_b);
	else
		radix_sort(stack_a, stack_b);
}

void	init_stack_a(t_list **stack_a, int argc, char **argv)
{
	t_list	*new_node;
	char	**args;
	size_t	i;

	i = 0;
	if (argc == 2)
		args = ft_split(argv[1], ' ');
	else
		args = &argv[1];
	check_args(args, i);
	if (args[i] == NULL)
		put_error("Error");
	*stack_a = ft_lstnew(ft_atoi(args[i++]));
	while (args[i])
	{
		new_node = ft_lstnew(ft_atoi(args[i++]));
		ft_lstadd_back(stack_a, new_node);
	}
	coordinate_compression(stack_a);
	if (argc == 2)
		free_str(args);
}

void	setup_stack(t_list **stack_a, t_list **stack_b,
			int argc, char **argv)
{
	init_stack_a(stack_a, argc, argv);
	*stack_b = NULL;
}

int	main(int argc,	char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	if (argc < 2)
		return (1);
	setup_stack(&stack_a, &stack_b, argc, argv);
	if (is_sorted(&stack_a) == true || ft_lstsize(&stack_a) == 0)
	{
		free_list(stack_a);
		return (2);
	}
	sort(&stack_a, &stack_b);
	free_list(stack_a);
}
