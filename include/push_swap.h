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

# define NEVER_EDITED -1
# define INT_RANGE 11

t_list	*ft_lstnew(int data);
void	ft_lstadd_front(t_list **list, t_list *new);
t_list	*ft_lstlast(t_list **list);
void	ft_lstadd_back(t_list **list, t_list *new);
size_t	ft_lstsize(t_list **list);
//void	ft_printlst_data(t_list **head);
//void	ft_printlst_index(t_list **head);
//void	ft_printlst_index_data(t_list **head);
bool	is_sorted(t_list **stack);
void	cordinate_comp(t_list **stack);
void	sort_under_5(t_list **stack_a, t_list **stack_b);
void	reverse_rotate(t_list **stack);
bool	rotate(t_list **stack);
int		sa(t_list **stack_a);
int		sb(t_list **stack_b);
int		ss(t_list **stack_a, t_list **stack_b);
void	pa(t_list **stack_a, t_list **stack_b);
void	pb(t_list **stack_b, t_list **stack_a);
void	ra(t_list **stack_a);
void 	rb(t_list **stack_b);
void	rr(t_list **stack_a, t_list **stack_b);
void	rra(t_list **stack_a);
void	rrb(t_list **stack_b);
void	rrr(t_list **stack_a, t_list **stack_b);
int		find_min_in_list(t_list **stack, int min_valid);
void	sort_size3(t_list **stack_a);
void	mainlogic_of_sort_size3(t_list **stack, t_list *head, int min, int next_min);
int		get_distance_to_min(t_list **stack, int min);
void	sort_size4(t_list **stack_a, t_list **stack_b);
void	sort_size5(t_list **stack_a, t_list **stack_b);
void	sort_under_5(t_list **stack_a, t_list **stack_b);
void	radix_sort(t_list **stack_a, t_list **stack_b);
size_t	count_max_bits(t_list **stack);
void	free_list(t_list *list);
void	check_args(char **args, int start);
void	put_error(char *str);
int		check_dup(char **args, int num, int i);
int		check_in_range(char *num);
int		ft_isnum(char *num);
void	free_str(char **str);
void	ft_debuglst(t_list **stack_a, t_list **stack_b);
long long	ft_atoll(char *str);
#endif