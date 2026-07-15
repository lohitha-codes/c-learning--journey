#include<stdio.h>
int main(){
    int arr[3][3],i,j;
    int check = 1;
    printf("enter 9 numbers: ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i==j){
                if(arr[i][j]!=1){
                check = 0;
            }
            }
            else{
                if(arr[i][j]!=0){
                check = 0;
                }
            }
        }
    }
    if(check == 1){
        printf("identity matrix");
    }
    else{
        printf("non identity matrix");
    }
    return 0;
}