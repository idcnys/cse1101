#include <stdio.h>

int main()
{

    int a = 10;
    int *p;
    p = &a;
    printf("a=%d &a=%X p=%X *p=%d\n", a, &a, p, *p);
    printf("%x", &a);
    // my assumptions => a=10 &a=location p=location *p=10;
    // output a=10 &a=61FF18 p=61FF18 *p=10
    // corrected

    return 0;
}