#include<stdio.h>
int main(){
    int choice; 
    float num1 ,num2 , result;
    printf("simple calculator\n");
    printf("1.addition\n");
    printf("2.substraction\n");
    printf("3.multiplication\n");
    printf("4.divisior\n");
    printf("enter your choice(1/2/3/4):");
    scanf("%d",&choice);
    printf("enter two numbers:");
    scanf("%f %f",& num1 ,& num2);
    //perfrom the claculation based on user choice 
    switch (choice){
    case 1 ://addition
    result  = num1 + num2;
    printf("reslut:%.2f+%.2f=%.2f\n",num1 ,num2,result);
    break;
    case 2 ://substraction
    result = num1 - num2 ;
    printf("reslut:%.2f-%.2f=%.2f\n",num1 ,num2 ,result);
    break;
    case 3 ://multiplication
    result = num1 * num2;
    printf("result:%.2f * %.2f=%.2f\n",num1 , num2 , result);
    break;
    case 4 ://division
    if(num2  == 0){
        printf("error:division by zero is not allowed:/n");

    } else{
        result = num1/num2;
        printf("reslut:%.2f/%.2f =%.2f/n", num1 ,num2 , result);
        
    }

    break;

    default:

    printf("invalid choice :please select a valid option,/n");
    break;
}
return 0;
}