#include<stdio.h>
int main(){
    int arr[5],i,smallest;
    printf("enter 5 array elements: ");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    smallest = arr[0];
    for(i=1;i<5;i++){
        if(arr[i] <smallest){
            smallest = arr[i];
        }

    }
    printf("smallest:%d",smallest);
    return 0;
}
