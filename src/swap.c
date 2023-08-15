#include "../push_swap.h"

void swap(t_list **stack)
{
	t_list *head = *stack;
	t_list *next = (*stack)->next;

	int tmp_data = head->data;
	head->data = next->data;
	next->data = tmp_data;
	/*
	 * swapで考えるとわかりやすい。。
	 * 　tmp = *a;   //tmp_data = head->data;
	  	 *a = *b;   //head->data = next->data;
		 *b = tmp;  //next->data = tmp_data;
	 */
}

void sa(t_list **stack_a)
{
	swap(stack_a);
	ft_putendl_fd("sa", 1);
}

void sb(t_list **stack_b)
{
	swap(stack_b);
	ft_putendl_fd("sb", 1);
}

void ss(t_list **stack_a, t_list **stack_b)
{
	swap(stack_a);
	swap(stack_b);
	ft_putendl_fd("ss", 1)
}

/*
void printList(t_list *node)
{
	while (node)
	{
		printf("%d, ->", node->data);
		node = node->next;
	}
	printf("NULL\n");
}

int main()
{
	t_list *node1 = malloc(sizeof(t_list));
	node1->data = 10;

	t_list *node2 = malloc(sizeof(t_list));
	node2->data = 20;

	t_list *node3 = malloc(sizeof(t_list));
	node3->data = 30;

	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;

	printf("Original list\n");
	printList(node1);
	swap(&node1);
	printf("After swapping\n");
	printList(node1);

	free(node1);
	free(node2);
	free(node3);

	return 0;
}
 */