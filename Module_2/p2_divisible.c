// 2. Problem Statement: Write a program that accepts an integer and check whether
// it is divisible by 5 or 7.
#include<stdio.h>

int main(){

    int n;
    while(1){

        printf("Enter a Number: ");
        scanf("%d",&n);
        if(n<0){
            printf("End of input.\n");
            break;
        }
        if(n%5==0 && n%7==0){
             printf("%d is divisible by both 5 & 7\n",n);
        }
        else if(n%5 == 0){
            printf("%d is divisible by %d\n",n,5);
        }else if(n%7==0){
            printf("%d is divisible by %d\n",n,7);
        }else{
             printf("None of them\n");
        }
    }


    return 0;
}