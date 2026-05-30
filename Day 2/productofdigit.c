#include <stdio.h>

int main() {
    int n, digit, pro = 1;

    printf("Enter a number");
    scanf("%d", &n);

    while (n != 0)
     {
        digit = n % 10;
        pro = pro * digit;
        n = n / 10;
    }

    printf("Product of digits = %d", pro);

    return 0;
}