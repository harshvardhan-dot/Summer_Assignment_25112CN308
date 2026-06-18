#include <stdio.h>
int binary( int arr[], int n,int key ){
    int beg = 0,  end = n-1 ;
    int mid;
    while(beg<=end){
        mid = (end + beg)/2;
        if (arr[mid]==key){
            return mid ;
        }
        else if (arr[mid]<key){
            beg = mid + 1;
        }
        else{
            end = mid - 1;
        }

    }
    return -1;

}

int main() {
    int i,n ,result; 
    int key;
    printf("number of elemnts of array\n");
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n;i++){
        scanf("%d", &arr[i]);
    }
    printf("enter the element to search\n ");
    scanf("%d",&key);
    result = binary(arr, n, key );
    if (result != -1){
        printf(" the elemnt is found at %d\n",result);
    }
    else{
        printf("elemnt not found");
    }
    return 0;
}