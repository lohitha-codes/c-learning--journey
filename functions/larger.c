#include<stdio.h>
int large(int ,int);
int main(){
    int a =6999 ,b =6999;
    int sum;
    sum = large(a,b);
    printf("large:%d",sum);
}
int large(int x,int y){
    if (x > y) {

    return x;}
    else if(x=y){
    printf( "both are equal\n");
return x;}
    else
    return y; 
}