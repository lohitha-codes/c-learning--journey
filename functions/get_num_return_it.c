#include<stdio.h>
int getnumber();
int main(){
    int num ;
    num = getnumber();
    printf("%d",num);
}
int getnumber(){
    int a ;
    printf("enter a number: ");
    scanf("%d",&a);
    return a;
}