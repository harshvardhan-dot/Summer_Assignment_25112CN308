#include <stdio.h>

int main() {
    int n;
    int i , prod ;


    printf("Enter the number whose table is required");
    scanf("%d",&n);
    for (i = 1; i <=10; i++)
    {
        prod = n*i;
        printf("%d\n",prod);
    }

    
    return 0;
}