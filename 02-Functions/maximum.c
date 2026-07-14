#include<stdio.h>
void max( int,int);
int main(){
    int a = 10,b=20;
    max(a,b);
}
void max(int a,int b){
    if (a >b)
    printf("a is greater");
    else
    printf("b is greater");
}
