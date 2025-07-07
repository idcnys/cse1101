#include <stdio.h>

void Display(int *p, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        *(p + i) += 1;
        printf("%d ", *(p + i));
    }
    printf("\n");
}

int main()
{
    int i;
    int ax[5] = {10, 70, 50, 30, 20};
    Display(ax, 5);
    for (i = 0; i < 5; i++)
        printf("%d ", ax[i]);
    return 0;
}
