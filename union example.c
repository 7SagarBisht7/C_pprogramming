#include <stdio.h>
#include <string.h>
union Data {
   int i;
   float f;
   char str[20];
   char str1[20];
};

int main( ) {

   union Data data;
   data.i = 10;
   printf( "data.i : %d\n", data.i);
   data.f = 220.5;
   printf( "data.f : %f\n", data.f);
   strcpy( data.str, "C Programming");
   printf( "data.str : %s\n", data.str);
   strcpy( data.str1, "C++");
   printf( "data.str : %s\n", data.str1);
   return 0;
}