#include <stdio.h>
int add(int,int);
int main()
{
    int a,b,result;
    printf("\nEnter the value of a and b:");
    scanf("%d%d",&a,&b);
    result=add(a,b);
    printf("\nSum is: %d",result);
    return 0;
}
int add(int x, int y)
{
    int z;
    z=x+y;
    return z;
}
