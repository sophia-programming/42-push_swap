/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaoba <oaoba@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 13:48:04 by oaoba             #+#    #+#             */
/*   Updated: 2023/08/29 13:51:29 by oaoba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define  PUSH_SWAP_H

# include "../libft/libft.h"
# include "../ft_printf/ft_printf.h"

# include <libc.h>

typedef struct s_list
{
	int				data;
	struct s_list	*next;
	int				index;
}				t_list;

# define NOT_EDITED -1
# define INT_RANGE 11

t_list		*ft_lstnew(int data);
void		ft_lstadd_front(t_list **list, t_list *new);
t_list		*ft_lstlast(t_list **list);
void		ft_lstadd_back(t_list **list, t_list *new);
size_t		ft_lstsize(t_list **list);
void		update_indexes_of_list(t_list **stack);
void		setup_stack(t_list **stack_a, t_list **stack_b,
				int argc, char **argv);
bool		rotate(t_list **stack);
void		reverse_rotate(t_list **stack);
void		sa(t_list **stack_a);
void		sb(t_list **stack_b);
void		ss(t_list **stack_a, t_list **stack_b);
void		pa(t_list **stack_a, t_list **stack_b);
void		pb(t_list **stack_b, t_list **stack_a);
void		ra(t_list **stack_a);
void		rb(t_list **stack_b);
void		rr(t_list **stack_a, t_list **stack_b);
void		rra(t_list **stack_a);
void		rrb(t_list **stack_b);
void		rrr(t_list **stack_a, t_list **stack_b);
void		coordinate_compression(t_list **stack);
int			find_min_in_list(t_list **stack, int min_valid);
bool		is_sorted(t_list **stack);
void		swap(t_list **stack);
void		mainlogic_of_sort_size3(t_list **stack, t_list *head,
				int min, int next_min);
int			get_distance_to_min(t_list **stack, int min);
void		sort_size3(t_list **stack_a);
void		sort_size4(t_list **stack_a, t_list **stack_b);
void		sort_size5(t_list **stack_a, t_list **stack_b);
void		sort_under_5(t_list **stack_a, t_list **stack_b);
void		radix_sort(t_list **stack_a, t_list **stack_b);
size_t		count_max_bits(t_list **stack);
void		free_list(t_list *list);
void		free_str(char **str);
void		check_args(char **args, int start);
void		put_error(char *str);
long long	ft_atoll(char *str);
#endif
