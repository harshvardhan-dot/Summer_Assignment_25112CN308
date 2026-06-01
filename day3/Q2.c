#include <stdio.h>

int main()
{
    int i, j;
    int flag;
    int start, end;

    printf("enter a number  to start \n");
    scanf("%d", &start);
    printf("enter the last digit ");
    scanf("%d", &end);

    for (i = start; i <= end; i++)
    {
        if (i < 2)
            continue;
        flag = 0;
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("%d", i);
        }
    }

    return 0;
}