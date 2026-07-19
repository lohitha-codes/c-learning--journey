#include<stdio.h>
int main(){
    int arr[3][2],trans[2][3],i,j;
    printf("enter 9 elements: ");
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("matrix is: \n");
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    printf("trans :\n");
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            trans[j][i]=arr[i][j];
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
           printf("%d\t",trans[i][j]); 
        }
        printf("\n");
    }
    
    return 0;
}