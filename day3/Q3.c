#include <stdio.h>

int main()
{
    int a, b, gcd;
    printf(" enter two numbers ");
    scanf("%d %d", &a, &b);
    for (int i = (a < b ? a : b); i >= 1; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
            break;
        }
    }
    printf("gcd = %d\n", gcd);

    return 0;
}