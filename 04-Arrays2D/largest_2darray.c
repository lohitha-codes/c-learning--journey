#include<stdio.h>
int main(){
    int arr[3][3],i,j,largest;
    printf("enter 9 elements: ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
        scanf("%d",&arr[i][j]);
        }
    }
     largest = arr[0][0];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(arr[i][j] > largest){
            largest = arr[i][j];
        }
        }
    }
    printf("largest = %d",largest);
    return 0;

}