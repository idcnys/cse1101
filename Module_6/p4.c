#include <stdio.h>
/*
Problem Statement Write a program to find the highest number from an array ax[10] using a
pointer that points to the first element of ax[].
int ax[5]={50,20,70,40,25};
int *p=&ax[0]
//write your codes using p
*/
int main()
{

    int ax[7] = {50, 20, 90, 70, 40, 25, 100};
    int *p = &ax[0];
    int n = 7;
    int *mx;

    for (int i = 1; i < n; i++)
    {
        // printf("inloop: %d\n", *(p + i));
        if (*mx < *(p + i))
            mx = (p + i);
    }
    printf("%d", *mx);

    return 0;
}
