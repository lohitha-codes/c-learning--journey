#include<stdio.h>
int main(){
    int arr[5],searchnumber;
    int found =0;
    printf("enter 5 numbers:\n");
    for( int i =0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter searchnumber: ");
    scanf("%d",&searchnumber);

    for( int i =0;i<5;i++){
        if(arr[i]==searchnumber){
            found = 1;
            break;
        }
    }
    if(found == 1){
        printf("element found");
    }
    else{
        printf("element not found");
    }
    return 0;
}