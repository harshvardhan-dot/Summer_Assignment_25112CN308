#include <stdio.h>

int main()
{
    int a, b, gcd, lcm;
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
    lcm = (a*b)/gcd ;
    printf("the lcm is = %d\n",lcm);
    

    return 0;
}