#include <stdio.h>
int main(){

    int a=1,b=2,c;
    c=(++a,a+=b);
    printf("%d%d%d",a,b,c);

    return 0;
}



