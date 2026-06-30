#include<stdio.h>
int sum();
int main(){
    int ans;
    ans = sum();
    printf("sum:%d",ans);
}
int sum(){
    int a,b,sum=0;
    printf("enter number a: ");
    scanf("%d",&a);
    printf("enter number b: ");
    scanf("%d",&b);
    sum = a+b;
    return sum;

}