#include<stdio.h>
int main(){
    int arr[3][3],i,j;
    int diagonal =1;
     printf("enter 9 numbers: ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i==j){
                if(arr[i][j] = 0){
                diagonal = 0;
            }
        }
            else{
                if(arr[i][j]!=0){
                diagonal = 0;
                }
            }
        }
    }
    if(diagonal == 1){
        printf("diagonal matrix");
    }
    else{
        printf("non diagonal matrix");}
        return 0;

}