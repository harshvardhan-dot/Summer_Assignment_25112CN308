#include <stdio.h>

int main() {
    int n;
    int sum =0 ;
    printf("enter the number ");
    scanf("%d",&n);
    while(n != 0){
       int  last_digit = n%10;
       n = n/10;
       sum = sum + last_digit;
    }   
     printf("the sum of digits is %d",sum);
    
    
    
    return 0;
}