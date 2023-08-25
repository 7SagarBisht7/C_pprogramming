#include <stdio.h>
int add();
int main()
{
    int result;
    result=add();
    printf("%d",result);

    return 0;
}
int add()
{
    int a,b,result;
    printf("\nEnter a and b:");
    scanf("%d%d",&a,&b);
    result=a+b;
    return result;
}
