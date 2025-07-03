#include<stdio.h>
int Big(int a, int b){
    return a>b ? a:b;
    //if else shortcut
    // condition ? if true then what : if false then what
}

int main(){
    int ax[10]={22,89,1,23,9,-1,0,-24,13,5};
    int mx = ax[0];
    //let us assume
    for(int i=1;i<10;i++){
        mx = Big(mx,ax[i]);
    }

    printf("Maximum Number is %d",mx);


    return 0;
}