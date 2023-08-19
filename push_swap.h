#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include "../ft_printf/new_printf/ft_printf.h"
# include <libc.h>

typedef struct s_list
{
	int				data;
	struct s_list	*next;
}t_list;

void	swap(t_list **stack);
void	sa(t_list **stack_a);
void	sb(t_list **stack_b);
void	push(t_list **stack_from, t_list **stack_to);
void	pa(t_list **stack_a, t_list **stack_b);
void	pb(t_list **stack_b, t_list **stack_a);
bool	rotate(t_list **stack);
void	ra(t_list **stack_a);
void 	rb(t_list **stack_b);
void	rr(t_list **stack_a, t_list **stack_b);
bool	reverse_rotate(t_list **stack);
void	rra(t_list **stack_a);
void	rrb(t_list **stack_b);
void	rrr(t_list **stack_a, t_list **stack_b);

bool	is_sorted(t_list **stack);
void	sort_size3(t_list **stack_a);
void	sort_size4(t_list **stack_a, t_list **stack_b);
void	sort_size5(t_list **stack_a, t_list **stack_b);
void	sort_under_5(t_list **stack_a, t_list **stack_b)

int		find_min_in_list(t_list *list);
int		get_distance_to_min(t_list **stack, int min);

void	put_error(char *str);
bool	Check_If_INT(long long num);
void	free_list(t_list *list);
void	free_str(char **str);
void	selective_sort(t_list **stack_a, t_list **stack_b);

#endif
