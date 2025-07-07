#include <stdio.h>

/*Problem Statement Write a function that accepts the address of an array and return the address
of the lowest number of the array.*/
int *small_address(int *ax)
{
    int *p = ax;
    int n = 7;
    int *mn = ax;

    for (int i = 1; i < n; i++)
    {
        // printf("inloop: %d\n", *(p + i));
        if (*mn > *(p + i))
            mn = (p + i);
    }
    return mn;
}

int main()
{

    int ax[7] = {50, 20, 90, 70, 40, 25, 100};
    // int *p = &ax[0];
    // int n = 7;
    // int *mn = &ax[0];

    // for (int i = 1; i < n; i++)
    // {
    //     // printf("inloop: %d\n", *(p + i));
    //     if (*mn > *(p + i))
    //         mn = (p + i);
    // }
    int *mn = small_address(&ax[0]);
    printf("%d", *mn);

    return 0;
}