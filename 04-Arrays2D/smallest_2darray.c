#include<stdio.h>
int main(){
    int arr[3][3],i,j,smallest;
    printf("enter 9 elements: ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    smallest = arr[0][0];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(arr[i][j]<smallest){
                smallest = arr[i][j];
            }
        }
    }
    printf("smallest = %d",smallest);
    return 0;
}