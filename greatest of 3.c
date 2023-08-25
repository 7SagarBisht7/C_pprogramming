#include <stdio.h>
int main(){
    int a,b,c;
    printf("\nEnter value of a,b and c:");
    scanf("%d%d%d",&a,&b,&c);
    a>b?(a>c? printf("\n a is greatest"):printf("\n c is greatest")):(b>c? printf("\n b is greatest"):("\n c is greatest"));

    return 0;
}



