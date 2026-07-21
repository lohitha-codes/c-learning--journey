#include<stdio.h>
int main(){
    int a =10,b=9;
    int *p,*q;
    p = &a;
    q = &b;
    printf("value of a = %d\n",a);
    printf("address of a = %x\n",&a);
    printf("address of p = %d\n",&p);
    printf("value stored  in  p = %x\n",p);
    printf(" stored value of p=%d\n",*p);
    printf("value of b = %d\n",a);
    printf("address of b = %x\n",&b);
    printf("address of q = %d\n",&q);
    printf("value stored  in  q = %x\n",q);
    printf(" stored value of q=%d\n",*q);

    return 0;

}   
