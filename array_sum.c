#include<stdio.h>
int main(){
    int num[5],sum =0 ,avarage;
    printf("enter 5 numbers:");
    for(int i ;i<5;i++){
        scanf("%d",&num[i]);
    }
    for ( int i = 0;i<5;i++){
        sum = sum + num[i];
    }
    printf("sum = %d",sum);
    return 0;
}