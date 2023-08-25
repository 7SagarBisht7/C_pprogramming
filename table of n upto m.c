#include <stdio.h>
int main()
{   int i=1,n,m;
printf("\n Enter the number:");
scanf("%d",&n);
printf("\n Enter upto what multiple you want the table:");
scanf("%d",&m);
while (i<=m)
{
    printf("\n%d x %d = %d",n,i,n*1);
    i=i+1;
}

    return 0;
}
