#include <stdio.h>
int main(){
    int n1,n2,n3;
    printf("\nEnter three number:");
    scanf("%d%d%d",&n1,&n2,&n3);

    if(n1<n2 && n1<n3)
    {
        printf("\n n1 is smallest with value:%d",n1);

    }
    else if(n2<n1 && n2<n3)
    {
        printf("\n n2 is smallest with value:%d",n2);
    }
    else
    {
        printf("\n n3 is smallest with value:%d",n3);
    }

    return 0;

}



