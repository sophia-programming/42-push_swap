#include "push_swap.h"

int Check_If_INT(long long num)
{
	if ((num < INT_MIN) || (INT_MAX < num))
	{
		printf("Error\n");
	}
	return num;
}

int main()
{
	printf("%d\n", Check_If_INT(45));
	printf("%d\n", Check_If_INT(2147483648));
}