/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaoba <oaoba@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 16:37:28 by oaoba             #+#    #+#             */
/*   Updated: 2023/08/19 16:37:39 by oaoba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include "ft_printf/ft_printf.h"
# include <libc.h>

typedef struct s_list
{
	int				data;
	struct s_list	*next;
	int				index;
}t_list;

# define NEVER_EDITED -1

void	swap(t_list **stack);
void	sa(t_list **stack_a);
void	sb(t_list **stack_b);
bool	push(t_list **stack_from, t_list **stack_to);
bool	pa(t_list **stack_a, t_list **stack_b);
bool	pb(t_list **stack_b, t_list **stack_a);
bool	rotate(t_list **stack);
bool	ra(t_list **stack_a);
bool	rb(t_list **stack_b);
bool	rr(t_list **stack_a, t_list **stack_b);
void	reverse_rotate(t_list **stack);
void	rra(t_list **stack_a);
void	rrb(t_list **stack_b);
void	rrr(t_list **stack_a, t_list **stack_b);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
t_list	*ft_lstlast(t_list **lst);
t_list	*ft_lstnew(int data);
size_t	ft_lstsize(t_list **lst);

bool	is_sorted(t_list **stack);
void	mainlogic_of_sort_size3(t_list **stack_a, t_list *head, int min, int next_min);
void	sort_size3(t_list **stack_a);
void	sort_size4(t_list **stack_a, t_list **stack_b);
void	sort_size5(t_list **stack_a, t_list **stack_b);
void	sort_under_5(t_list **stack_a, t_list **stack_b);
int		find_min_in_list(t_list **list, int	min_value);
int		get_distance_to_min(t_list **stack, int min);
void	update_min_index(t_list **stack, size_t index);
void	update_indexes_of_list(t_list **stack);
size_t	count_max_bits(t_list **stack);
void	handle_processbits(t_list **stack_a, t_list **stack_b,
			size_t size_of_stack_a, size_t max_bits);
void	radix_sort(t_list **stack_a, t_list **stack_b);
void	put_error(char *str);
bool	check_isnumber(char *num);
bool	check_if_int(long long num);
bool	hasduplicates(int *numbers, size_t	size);
void	check_args(char **args, int start);
void	free_list(t_list *list);
void	free_str(char **str);
void	selective_sort(t_list **stack_a, t_list **stack_b);

#endif
