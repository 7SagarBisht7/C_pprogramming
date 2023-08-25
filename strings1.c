#include<stdio.h>


int main(){
char *str="hello";
while (*str!='\0')
{printf("%c",*str);                                    // hello
str++;
}
return 0;
}





/*int main(){
char *s1="hello";
char *s2= NULL;
s2=s1;
printf("%s",s2);                           // hello
return 0;
}*/


/*
int main(){
char s1[]="hello";
char s2=[6];
s2=s1;
printf("%s",s2);                              //complie time error
return 0;
}
*/

/*
int main(){
char s1[]="hello";
char *s2= NULL;
s2=s1;
printf("%s",s2);                                //hello
return 0;
}
*/


/*
int main(){
char *s1="hello";
char s2[6];
s2=s1;
printf("%s",s2);     //compile time error
return 0;
}
*/


