#include<stdio.h>
void num(int);
int main(){
    int a = 2366875689;
    num(a);
}
void num(int a){
    if (a % 2== 0 )
    printf("even number");
    else 
    printf("odd number");
}
