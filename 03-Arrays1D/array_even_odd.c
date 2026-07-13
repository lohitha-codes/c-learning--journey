#include<stdio.h>
int main(){
    int num [5];
    int even = 0,odd=0;
    printf("enter 5 numbers: ");
    for( int i = 0;i<5;i++){
        scanf("%d",&num);
    }
    for(int i =0;i<5;i++){
        if(num[i] %2 ==0){
            even += 1;
        }
        else {
            odd += 1;
        }
    }
printf("even :%d ",even);
printf("odd:%d ",odd);
return 0;
}
