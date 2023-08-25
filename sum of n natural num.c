#include <stdio.h>
int main()
{   int i,n,s=0;
printf("\n Enter the n:");
scanf("%d",&n);
i=1;
while (i<=n)
{   s=s+i;
    i=i+1;
}
printf("%d",s);

    return 0;
}
