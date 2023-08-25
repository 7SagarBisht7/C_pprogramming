#include <stdio.h>
void add(int,int);
int main()
{
    int a,b;
    printf("\nEnter the value of a and b:");
    scanf("%d%d",&a,&b);
    add(a,b);
    return 0;
}
void add(int x, int y)
{
    int z;
    z=x+y;
    printf("\n Sum is:%d",z);
}
