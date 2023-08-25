#include <stdio.h>
int main()
{   int n,i;
printf("\n Enter the number:");
scanf("%d",&n);
for(i=1;i<=10;i++)
{
    printf("\n%d X %d = %d",n,i,n*i);
}
    return 0;
}
