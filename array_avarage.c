#include<stdio.h>
int main(){
    int marks[5];
    int sum =0;
    float avg ;
    printf("enter 5 numbers:\n");
    for(int i = 0;i<5;i++){
        scanf("%d",&marks[i]);
    }
    for( int i=0;i<5;i++){
        sum = sum + marks[i];
        
    }
    printf("sum = %d",sum);
    avg = (float)sum /5;
    printf("avg = %2.f",avg);
    return 0;
}