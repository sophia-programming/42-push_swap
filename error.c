#include "push_swap.h"
//
//int Check_If_INT(long long num)
//{
//	if ((num < INT_MIN) || (INT_MAX < num))
//	{
//		printf("Error\n");
//	}
//	return num;
//}

//int main()
//{
//	printf("%d\n", Check_If_INT(45));
//	printf("%d\n", Check_If_INT(2147483648));
//}

bool hasDuplicates(int *numbers, int size)
{
	int i = 0;
	int j = i + 1;

	while (i < (size - 1))//最後の要素はすでに他の要素と比較されているため重複の可能性なし。
	{
		while (j < (size))
		{
			if (numbers[i] == numbers[j])
				return true; //重複あり
			j++;
		}
		i++;
	}
	return false; //重複なし
}

int main()
{
	int values[] = {2, 5, 4, 2};
	int size = sizeof(values) / sizeof(values[0]);
	/*
	 * 配列の個数を出している。配列全体のバイト数を
	 * 要素一つのバイト数で割ることで要素の個数が出る。
	 */

	if (hasDuplicates(values, size))
		printf("Duplicate numbers found.\n");
	else
		printf("No duplicate numbers.\n");
}