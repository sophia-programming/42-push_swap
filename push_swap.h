#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "../libft/libft.h"
#include "../ft_printf/new_printf/ft_printf.h"

#include <libc.h>

typedef struct s_list
{
	int				data;
	struct s_list	*next;
}t_list;

void	swap(t_list **stack);
void	put_error(char *str);
bool	Check_If_INT(long long num);
void	sa(t_list **stack_a);
void	sb(t_list **stack_b);
void	push(t_list **stack_from, t_list **stack_to);
bool	rotate(t_list **stack);
void	ra(t_list **stack_a);
void 	rb(t_list **stack_b);
void	rr(t_list **stack_a, t_list **stack_b);
bool	reverse_rotate(t_list **stack);
void	rra(t_list **stack_a);
void	rrb(t_list **stack_b);
void	rrr(t_list **stack_a, t_list **stack_b);
void	sort_size3(t_list **stack_a);
void	sort_size4(t_list **stack_a, t_list **stack_b);
bool	is_sorted(t_list **stack);
int		min_of_list(t_list *head);
int		find_min_in_list (const t_list *list);
int		get_distance_to_min(t_list **stack, int min);

#endif