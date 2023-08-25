#include <stdio.h>
int sum (int);
int main()
{
    int n;
    printf("\nEnter value of n:");
    scanf("%d",&n);
    printf("\nSum is:%d",sum(n));
    return 0;
}
int sum (int x)
{
    if (x==0)
        return x;
    else
        return x+sum(x-1);
}
