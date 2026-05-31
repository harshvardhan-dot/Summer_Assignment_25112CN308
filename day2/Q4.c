#include <stdio.h>

int main() {
    int  n , rev =0 ,digit ;

    printf("enter the number\n");
    scanf("%d",&n);
    int temp = n ;
   
     while (n!= 0)
    {
        digit =n%10;
        rev = rev*10 +digit ;
        n = n/10;

    }
    if (temp == rev )
    {
        printf("the given number is a palindrome");
    }
    else{
        printf("the given number is not a palindrome");
    }
    
    return 0;
}