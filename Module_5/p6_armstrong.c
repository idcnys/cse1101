#include <stdio.h>
#include <math.h>

int main() {
    int number=0;
    printf("N.B: Negative number to exit\n");

    while (1) {
        printf("Enter a number to check: ");
        scanf("%d", &number);
        if (number < 0) break;

        int original = number;
        int digits = 0;
        int temp = number;

        while (temp > 0) {
            digits++;
            temp /= 10;
        }

        double sum = 0;
        temp = number;
        while (temp > 0) {
            int digit = temp % 10;
            sum += pow(digit, digits);
            temp /= 10;
        }

        if ((int)sum == original)
            printf("Armstrong yeahh!\n");
        else
            printf("No\n");
    }

    return 0;
}