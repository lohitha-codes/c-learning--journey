#include<stdio.h>
int main(){
    int arr[3][3],i,j;
    int sum =0;
    printf("enter 9 elements:");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
        scanf("%d",&arr[i][j]);

        }
    }
    printf("matrix is:\n");
    for(i=0;i<3;i++){
    for(j=0;j<3;j++){
             printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++){
         int sum =0;
        for(j=0;j<3;j++){
            sum = arr[i][j] + sum;
        }
        printf("sum of each  row %d = %d\n",i+1,sum);
    }
    return 0;

}