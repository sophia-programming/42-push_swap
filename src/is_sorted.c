#include "../push_swap.h"

bool	is_sorted(t_list **stack)
{
	t_list	*head;

	head = *stack;
	while (head && head->next)
	{
		if (head->data <= head->next->data)
			head = head->next;
		else
			return (false);
	}
	return (true);
}

/*これ第二引数に直接整数を入れることはできないとはわかっているけどどうやって
 * テストしていいか分からず。。
 */
int main()
{
	t_list *stack = NULL;

	push(&stack, 3);
	push(&stack, 6);
	push(&stack, 1);
	push(&stack, 7);

	if (is_sorted(&stack))
	{
		printf("The list is sorted.\n");
	}
	else
		printf("The list is not sorted.\n");
}