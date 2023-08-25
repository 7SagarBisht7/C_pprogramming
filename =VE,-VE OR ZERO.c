#include <stdio.h>
int main(){
    int a;
    printf("\nEnter the number:");
    scanf("%d",&a);

    if(a>0)
    {
        printf("\nNumber is positive");

    }
    else if(a<0)
    {
        printf("\nNumber is negative");
    }
    else
    {
        printf("\nNumber is zero");
    }

    return 0;

}



