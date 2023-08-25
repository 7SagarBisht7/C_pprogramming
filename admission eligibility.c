#include <stdio.h>
int main(){
    int a,b;
    printf("\nEnter 12th:");
    scanf("%d",&a);
    printf("\nEnter jee marks:");
    scanf("%d",&b);

    if(a>=60 && b>=85)
    {
        printf("\nAdmission allowed");
    }
    else
    {
        printf("\nAdmission not allowed");
    }

    return 0;

}


// give reason(s) for not allowed using nested if-else statements 
