#include <stdio.h>
int main()
{   int i=1,count=0;
while (i<=100)
{   if (i%5==0)
    {
        count=count+1;
    }
    i=i+1;
}
printf("%d",count);

    return 0;
}
