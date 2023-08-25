#include <stdio.h>
int main()
{   int i=1,n;
    long long int fact=1;
printf("\n Enter the number:");
scanf("%d",&n);

if (n<0)
{
    printf("\nFactorial of -ve number is not possible");
}
else if (n==0)
{
    printf("\nFactorial is 1");
}
else
{
    while (i<=n)
    {
        fact=fact*i;
        i=i+1;
    }
    printf("\nFactorial is:%lld",fact);

}

    return 0;
}
