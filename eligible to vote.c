#include <stdio.h>
int main(){
    int a;
    printf("\nEnter age:");
    scanf("%d",&a);

    if(a>=18)
    {
        printf("\nEligible to vote");
    }
    else
    {
        printf("\nNot eligible to vote");
    }

    return 0;

}



