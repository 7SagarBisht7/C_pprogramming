#include <stdio.h>
long long int factorial(int);
int main()
{
    int n;
    printf("\nEnter value of n:");
    scanf("%d",&n);
    printf("\nFactorial is:%lld",factorial(n));
    return 0;
}
long long int factorial(int x)
{
    if (x==0||x==1)
        return 1;
    else
        return x*factorial(x-1);
}
