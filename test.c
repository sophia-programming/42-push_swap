#include <libc.h>

int main()
{
    // char *str = "";
    char *str = " ";
    int i = 0;
    
    while (str[i])
    {
        if (str[i] == ' ')
        {
            printf("Error\n");
        }
        else
        {
            printf("Not Error\n");
        }
        i++;
    }
}

/*
 ""これではなく、''これに訂正
*/
