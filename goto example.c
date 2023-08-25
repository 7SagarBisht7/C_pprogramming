#include <stdio.h>
int main()
{int x;
label1:
    printf("\n Enter vaue of x:");
    scanf("%d",&x);
    if (x>100)
        goto label1;
    else
        goto label2;
label2:
    printf("\nValue is ok");


    return 0;
}
