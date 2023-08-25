#include <stdio.h>
int main(){
    int age;
    printf("\nEnter age:");
    scanf("%d",&age);

    if(age<18)
    {
        printf("\n Youngster");

    }
    else if(age>=18 && age<=40)
    {
        printf("\n Adult");
    }
    else if(age>40 && age<=60)
    {
        printf("\n Middle aged");
    }
    else if(age>60)
    {
        printf("\n Senior citizen");
    }

    return 0;

}



