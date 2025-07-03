#include<stdio.h>

int fact(int a){
    int product = 1;
    for(int i=1;i<=a;i++){
        product *= i;
    }
    return product;
}

int nCr(int n,int r){
    return fact(n)/(fact(r)*fact(n-r));
    //formula
}
int nPr(int n,int r){
    return fact(n)/(fact(n-r));
    //formula
}

int main(){

    // printf("%d",fact(5));
    printf("*** Menu****\n1. Combination\n2. Permutation\n3. Exit\n");
    while(1){
        int op;
        printf("-> ");
    scanf("%d",&op);
      int n,r;
    if(op==3) break;
  
    else if(op==1){
        printf("Enter n & r (space seperated respectively): ");
        scanf("%d %d",&n,&r);
        printf("%dC%d is %d.\n",n,r,nCr(n,r));
    }
    else if(op==2){
        printf("Enter n & r (space seperated respectively): ");
        scanf("%d %d",&n,&r);
        printf("%dP%d is %d.\n",n,r,nPr(n,r));
    }else{
        printf("unknown input format please enter like 5 2\n");
    }

    



    }
    



    return 0;
}