#include "push_swap.h"
#include <libc.h>

void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main()
{
	int a = 42;
	int b = 24;
	swap(&a, &b);
	printf("%d %d\n", a, b);
}