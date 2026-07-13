#include<stdio.h>
int main(){
    int arr[5],largest;
    int i;
    printf("enter 5 array elemnts: ");
    for(i= 0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    largest = arr[0];
    for(i = 1;i<5;i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    
    }
    printf("largest :%d", largest);
    return 0;
}
