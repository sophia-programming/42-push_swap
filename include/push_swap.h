#ifndef PUSH_SWAP_H
# define  PUSH_SWAP_H

# include "../../libft/libft.h"
# include <libc.h>

typedef struct s_list
{
	int				data;
	struct s_list	*next;
	int				index;
}				t_list;

# define NEVER_EDITED -1
# define INT_RANGE 11

t_list	*ft_lstnew(int data);
void	ft_lstadd_front(t_list **list, t_list *new);
t_list	*ft_lstlast(t_list **list);
void	ft_lstadd_back(t_list **list, t_list *new);
size_t	ft_lstsize(t_list **list);
void	ft_printlst_data(t_list **head);
void	ft_printlst_index(t_list **head);
void	ft_printlst_index_data(t_list **head);
int		is_sorted(t_list **stack);
void	cordinate_comp(t_list **stack);
void	simple_sort(t_list **stack_a, t_list **stack_b);
int		sa(t_list **stack_a);
int		sb(t_list **stack_b);
int		ss(t_list **stack_a, t_list **stack_b);
int		pa(t_list **stack_a, t_list **stack_b);
int		pb(t_list **stack_b, t_list **stack_a);
int		ra(t_list **stack_a);
int		rb(t_list **stack_b);
int		rr(t_list **stack_a, t_list **stack_b);
int		rra(t_list **stack_a);
int		rrb(t_list **stack_b);
int		rrr(t_list **stack_a, t_list **stack_b);
int		get_min_sort(t_list **stack, int min_valid);
void	sort_size3(t_list **stack_a);
void	sort_size3_sub(t_list **stack, t_list *head, int min, int next_min);
int		get_distance_to_min(t_list **stack, int min);
void	sort_size4(t_list **stack_a, t_list **stack_b);
void	sort_size5(t_list **stack_a, t_list **stack_b);
void	simple_sort(t_list **stack_a, t_list **stack_b);
void	radix_sort(t_list **stack_a, t_list **stack_b);
int		count_max_bits(t_list **stack);
void	free_stack(t_list *stack);
void	check_args(char **args, int start);
void	put_error(char *str);
int		check_dup(char **args, int num, int i);
int		check_in_range(char *num);
int		ft_isnum(char *num);
void	free_str(char **str);
void	ft_debuglst(t_list **stack_a, t_list **stack_b);
#endif