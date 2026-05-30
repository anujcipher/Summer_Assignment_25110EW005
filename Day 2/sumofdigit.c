#include<stdio.h>
int main()
{
int n,i,digit,sum=0;
printf("enter the value of n");
scanf("%d",&n);
while(n>0)
{

digit=n%10;
n=n/10;
sum=sum+digit;
}
printf("sum=%d",sum);
    return 0;
}