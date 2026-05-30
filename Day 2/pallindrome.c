#include <stdio.h>

int main() {
    int n, rev= 0, rem,p;

    printf("Enter a number ");
    scanf("%d", &n);
    p=n;
    while (n != 0) 
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    } 
    if(rev==p)
    {

    printf("given number is pallindrome number");
    }
    else 
    {
        printf("given number is not pallindrome number");
    }
    return 0;
}