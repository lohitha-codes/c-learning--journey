#include<stdio.h>
int main(){
    int arr1[3][3],arr2[3][3],arr3[3][3],i,j;
    printf("array one elements: ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",arr1[i][j]);
        }
        printf("\n");
    }
    printf("array two elements: ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",arr2[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            arr3[i][j] = arr1[i][j]-arr2[i][j];
      }
    }
    printf("substraction  matrix is :\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
printf("%d\t",arr3[i][j]);
      }
      printf("\n");
    }
    return 0;
}
