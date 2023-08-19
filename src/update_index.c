//#include "../push_swap.h"
#include <libc.h>
void	update_min_index(t_list **stack, size_t index)
{
	t_list	*head;
	t_list	*min;

	min = NULL;
	head = *stack;

	while (head)
	{
		if ((head->index == NEVER_EDITED) &&
		(!min || head->data < min->data))
			min = head;
		head = head->next;
	}
	if (min)
		min->index = index;
}

void	update_indexes_of_list(t_list **stack)
{
	size_t	index;
	size_t	lst_size;

	index = 0;
	lst_size = ft_lstsize(stack);
	while (index < lst_size)
	{
		update_min_index(stack, index);
		index++;
	}
}

typedef struct	s_list {
	int				data;
	size_t			index;
	struct s_list	*next;
}				t_list;

t_list	*ft_lstnew(int data, size_t index)
{
	t_list	*new_elem;

	new_elem = (t_list *)malloc(sizeof(t_list));
	if (!new_elem)
		return (NULL);
	new_elem->data = data;
	new_elem->index = index;
	new_elem->next = NULL;
	return (new_elem);
}

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

void	ft_lstadd_back(t_list **lst, t_list *new_elem)
{
	t_list	*last;

	if (!*lst)
		*lst = new_elem;
	else
	{
		last = ft_lstlast(*lst);
		last->next = new_elem;
	}
}

size_t	ft_lstsize(t_list *lst)
{
	size_t	size;

	size = 0;
	while (lst)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}

// テスト用関数
void	print_list(t_list *lst)
{
	while (lst)
	{
		printf("Data: %d, Index: %zu\n", lst->data, lst->index);
		lst = lst->next;
	}
}

int	main(void)
{
	t_list	*stack = NULL;

	// ダミーデータでリストを生成
	ft_lstadd_back(&stack, ft_lstnew(5, NEVER_EDITED));
	ft_lstadd_back(&stack, ft_lstnew(3, NEVER_EDITED));
	ft_lstadd_back(&stack, ft_lstnew(8, NEVER_EDITED));
	ft_lstadd_back(&stack, ft_lstnew(2, NEVER_EDITED));

	// テスト前のリストの状態表示
	printf("Before update:\n");
	print_list(stack);

	// インデックスの更新
	update_indexes_of_list(&stack);

	// テスト後のリストの状態表示
	printf("\nAfter update:\n");
	print_list(stack);

	return (0);
}
