#include<stdio.h>
int main(){
    int a[5] , i;
    printf("enter array elements: ");
    for( i = 0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for( i =0;i<5;i++){
        printf("array of marks at index %d is:%d\n ",i,a[i]);
    }
    
    return 0;

    }
