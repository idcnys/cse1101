#include<stdio.h>
#include<math.h>
int binary(int a){
    int bin = 0;
    int i=0;
    while(a>0){
        int bit = a%2;
        // printf("%d %d\n",bit,i);
        bin = bin + bit*(int)round(pow(10, i));
        a/=2;
        i++;
    }
    // printf("Bin %d",bin);

    return bin;
}

int main(){
    int a;
    printf("Enter a number to convert: ");
    scanf("%d",&a);
    // binary(a);

    printf("Binary of %d is %d",a,binary(a));
    return 0;
}