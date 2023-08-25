#include <stdio.h>
void swap(int*,int*);
int main()
{
    int a=1,b=2;
    swap(&a,&b)
    printf("\n%d%d:",a,b);
    return 0;
}
swap(int*p1,int*p2)
{
    int temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
    printf()
}
