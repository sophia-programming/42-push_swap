#include "../push_swap.h"

void free_str(char **str)
{
	int i = 0;

	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

