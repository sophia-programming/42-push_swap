#include "push_swap.h"

bool Check_IsNumber(char *num)
{
	int i = 0;

	while (num[i])
	{
		if (!ft_isdigit(num[i]))
			return false;
		i++;
	}
	return true;
}

//int main()
//{
//	char *values[] = {"3", "6", "1", "s", "3s", "4*0"};
//	int size = sizeof(values) / sizeof(values[0]);
//	int i = 0;
//
//	while (i < size)
//	{
//		if (Check_IsNumber(values[i]))
//			printf("%s is a number!\n", values[i]);
//		else
//			printf("%s is not a number!\n", values[i]);
//		i++;
//	}
//	return 0;
//}

bool Check_If_INT(long long num)
{
	if ((INT_MIN < num) || (num < INT_MAX))
		return true;
	else
		return false;
}
//
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

//int main()
//{
//	int values[] = {2, 5, 4, 2};
//	int size = sizeof(values) / sizeof(values[0]);
//	/*
//	 * 配列の個数を出している。配列全体のバイト数を
//	 * 要素一つのバイト数で割ることで要素の個数が出る
//	 */
//
//	if (hasDuplicates(values, size))
//		printf("Duplicate numbers found.\n");
//	else
//		printf("No duplicate numbers.\n");
//}