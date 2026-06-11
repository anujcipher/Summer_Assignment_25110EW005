#include <stdio.h>

// Function to check Armstrong number
int isArmstrong(int n) {
    int original = n, remainder, sum = 0;

    while (n != 0) {
        remainder = n % 10;
        sum += remainder * remainder * remainder;
        n /= 10;
    }

    return (sum == original);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num))
        printf("%d is an Armstrong Number\n", num);
    else
        printf("%d is not an Armstrong Number\n", num);

    return 0;
}