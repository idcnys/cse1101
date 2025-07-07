#include <stdio.h>

int main()
{

    int a = 10, b = 20, t;
    int *p, *q;
    p = &a;
    q = &b;
    t = *p;
    *p = *q;
    *q = t;
    printf("a = % d b = % d *p = % d *q = % d p = % X q = % X\n", a, b, *p, *q, p, q);

    return 0;
}