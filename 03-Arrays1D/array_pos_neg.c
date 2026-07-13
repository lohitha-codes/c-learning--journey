#include<stdio.h>
int main(){
    int arr[10],postive =0,negative = 0,neutral = 0;
    printf("enter 5 numbers: ");
    for( int i = 0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    for( int i=0; i<10;i++){
        if(arr[i] > 0){
            postive += 1;
        }
        else if(arr[i]< 0){
            negative += 1;
        }
        else{
            neutral += 1;
        }
    }
    printf("postive:%d",postive);
    printf("negative:%d",negative);
    printf("neutral:%d",neutral);
    return 0;
}
