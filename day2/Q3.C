#include <stdio.h>

int main() {
    int n , digit,prod =1;
    printf("enter the number ");
    scanf("%d",&n);

    if(n == 0){
        printf("the number is 0");
    }
    else{
         while(n!= 0){
        digit = n%10;
        prod = prod*digit;
        n = n/10 ; 
    }
    printf("the product of digits = %d\n",prod);
}   
    return 0;
}