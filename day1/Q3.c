#include <stdio.h>

int main() {
    int n ;
    int fact =1   , i ;

    printf("enter the number to find factorial ");\
    scanf("%d",&n);
    if (n==0)
    {
        fact = 1;
        
    }
    else{

       for ( i = 1; i <=n; i++)
      {
        fact = fact *i;

       }
    }   
    printf("the factorial of %d is %d",n ,fact ) ;  
    
    return 0;
}