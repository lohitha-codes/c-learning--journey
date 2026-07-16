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
    for(j=0;j<3;j++){
         int sum =0;
        for(i=0;i<3;i++){
            sum = arr[i][j] + sum;
        }
        printf("sum of each  column %d = %d\n",j+1,sum);
    }
    return 0;
}

