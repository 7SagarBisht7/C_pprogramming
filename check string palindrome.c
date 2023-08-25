#include<stdio.h> 
#include<string.h> 
  
int main() { 
   char str[100], temp; 
   char str1[100]; 
   int i, j; 
   printf("\nEnter the string :"); 
   gets(str); 
   i = 0; 
   j = strlen(str) - 1; 
   strcpy(str1,str); 
   while (i < j)  
   { 
      temp = str[i]; 
      str[i] = str[j]; 
      str[j] = temp; 
      i++; 
      j--; 
   } 
   if(strcmp(str1,str)==0) 
   { 
   	printf("\n Given String is Palindrome"); 
   } 
   else 
   { 
   	printf("\n Not a Palindrome"); 
   } 
   return 0; 
}