#include <stdio.h>
/*
Problem Statement For following declaration
int ax[5]={50,20,70,40,25};
int *p=&ax[2]
 Now find values of following
i) p ii) p+1 iii) p-1 iv) *p v) *(p+2) vi) *p-1 vii) *(p+4)

*/

int main()
{
    int ax[5] = {50, 20, 70, 40, 25};
    //    0   1   2   3   4
    int *p = &ax[2];
    /*
    i) p = location of 70 = 61ff10
    ii) p+1 = location of 40 = 61ff14
    iii) p-1 = location of 20 = 61ff0c
    iv) *p = 70 = 70
    v) *(p+2) = 25
    vi) *p-1 = 20 // wrong its 70-1 =69
    vii) *(p+4) = value at (location of 25 + 8 bytes) = 61ff20

    */

    printf("%x", (p + 4));

    return 0;
}