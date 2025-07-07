#include <stdio.h>
/*
Problem Statement Write a function that swaps two values of the called function. Check the
function with i) call by values and ii) call by reference.
int main(){
 int a=10,b=20;
//write your codes
return 0;
}
*/
void swap(int *a, int *b)
{
    // call by value
    //  int *t = a;
    //  a = b;
    //  at location a = b
    //  b = t;
    //  printf("%d %d", *a, *b);

    // call by ref
    int t = *a;
    *a = *b;
    *b = t;
    // printf("%d %d", *a, *b);
}

int main()
{
    int a = 10, b = 20;
    swap(&a, &b);
    printf("%d %d", a, b);
    return 0;
}