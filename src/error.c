#include "../push_swap.h"

void put_error(char *str)
{
	ft_putendl_fd(str, 2);
	exit(0);
}

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

bool Check_If_INT(int64_t num)
{
	if ((INT_MIN < num) || (num < INT_MAX))
		return true;
	else
		return false;
}

bool hasDuplicates(int *numbers, int size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = i + 1;

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

void check_args(char **args, int start)
{
	size_t	num;

	while (args[start])
	{
		if (!Check_IsNumber(args[start]))
			put_error("Error");
		num = ft_atoi(args[start]);
		if (!Check_If_INT(num))
			put_error("Error");
		if (hasDuplicates((int *)num, size))
			put_error("Error");
		start++;
	}
}
