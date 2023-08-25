#include <stdio.h>
void add();
int main()

{
int i;
for (i=1;i<=3;i++)
    {
    add();
    }

    return 0;
}
void add()
{
    int a,b,result;
    printf("\nEnter a and b:");
    scanf("%d%d",&a,&b);
    result=a+b;
    printf("\nSum is: %d",result);
}
