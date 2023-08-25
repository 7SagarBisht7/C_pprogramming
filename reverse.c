#include <stdio.h>
int main()
{   int n,sum=0, rem,rev=0;
printf("\n Enter the number:");
scanf("%d",&n);
while(n!=0)
{
    rem=n%10;
    rev=rev*10+rem;
    n=n/10;
}
printf("\nReverse of digits:%d",rev);

    return 0;
}
