#include<stdio.h>
int fact(int );
int main(){
    int n = 5;
    int ans ;
    ans = fact(n);
    printf("fact=%d",ans);
}
int fact(int n){
    int fact = 1,i;
 for (i =1;i<= n ;i++){
    fact = fact *i;
 }
 return fact;
}