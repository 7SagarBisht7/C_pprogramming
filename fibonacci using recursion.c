#include <stdio.h>
int fibo (int);
int main()
{
    int n,i;
    printf("\nEnter value of n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d",fibo(i));
    }
    return 0;
}
int fibo (int x)
{
    if (x==0)
        return 0;
    else if(x==1)
        return 1;
    else
        return fibo(x-1)+fibo(x-2);
}
