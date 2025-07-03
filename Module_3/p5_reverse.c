#include<stdio.h>
#include<math.h>
int count(int n){
    int l = 0;
    while(n>0){
        l++;
        n/=10;
    }
    return l;
}
int reverse(int n,int mx){
    int reversed=0;
    int i=0;
    while(n>0){
        int l = n%10;
        reversed += l * (int)round(pow(10,mx-i));
        //pow() function does not return int/long long i googled it xD
        //round( making it decimal) (long long ) changing type
        i++;
        n/=10;
    }
    // printf("%d",reversed/10);

    return reversed/10;

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
        printf("Reversed Number is %d\n",reverse(n,count(n)));
    }


    return 0;
}