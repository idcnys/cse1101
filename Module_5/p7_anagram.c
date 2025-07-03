#include<stdio.h>
#include<math.h>


int reverse(int n,int mx){
    int reversed=0;
    int i=0;
    while(n>0){
        int l = n%10;
        reversed += l*(int)round(pow(10,mx-i));
        i++;
        n/=10;
    }
    // printf("%d",reversed/10);

    return reversed/10;

}
int isAnagram(int n1,int n2){
    int dump=n1;
    int l = 0;
    while(dump>0){
        l++;
        dump/=10;
    }

    int dump2=n2;
    int l2 = 0;
    while(dump2>0){
        l2++;
        dump2/=10;
    }

    if(l!=l2) return 0;

    if(reverse(n1,l)==n2) return 1;
    else return 0;





}
int main(){
    int k;
    int n1,n2;
    printf("N.B: Two Negative numbers to exit\n");
    while(1){
        // printf("%d",sizeof(123));
        printf("Enter two numbers space seperated: ");
        scanf("%d %d",&n1,&n2);
        if(n1<0 &&n2<0){
            printf("Thanks\n");
            break;
        }

        if(isAnagram(n1,n2)) printf("Yes both are anagrams\n");
        else printf("No\n");
    }

    
    return 0;
}