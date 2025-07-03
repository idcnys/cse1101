#include<stdio.h>
int isPrime(int a){
    //1 -> true
    // 0 -> false
    if(a<2) return 0;
    //else 1 or 0 return false
    if(a<4) return 1;
    //means 2 or 3 return true

    for(int i=2;i<a;i++){
        //checking all numbers from 2-a
        if(a%i==0) return 0;
        //means a is divisible by something not a and 1 
    }
    return 1;
    //it is a prime for sure
}
int main(){
    int n;
    printf("N.B: Negative number to exit\n");
    while(1){

        printf("Enter a Number: ");
        scanf("%d",&n);
        if(n<0){
            printf("End of a program.\n");
            break;
        }

        if(isPrime(n))
        printf("%d is a Prime number\n",n);
        else 
        printf("%d is not prime.\n",n);

      
    }


    return 0;
}