#include <stdio.h>

int main() {
    int n1,n2, i, j,count;

    printf("Enter starting number ");
    scanf("%d", &n1);

    printf("Enter ending number: ");
    scanf("%d", &n2);

    printf("Prime numbers between %d and %d are:\n", n1, n2);

    for (i = n1; i <= n2; i++) {

        if (i <= 1)
            continue;

        count= 0;

        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                count = 1;
                break;
            }
        }

        if (count == 0)
            printf("%d ", i);
    }

    return 0;
}
