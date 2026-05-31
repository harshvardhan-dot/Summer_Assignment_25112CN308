#include <stdio.h>

int main() {
    int n ;
    int count =0 ;
    printf("enter the number");
    scanf("%d",&n);
    if(n==0){
        count =1;
    }
    else{

    while(n !=0 ){
        n = n/10;
        count ++;

    }
}
   printf("the no of digits  are %d",count);

    return 0;
}