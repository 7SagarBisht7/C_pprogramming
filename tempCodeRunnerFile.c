//Write a program to read and display information of n number of books in a library 
#include <stdio.h> 
struct Bookinfo 
{ 
      char bname[20]; 
      int pages; 
      float price; 
}; 
int main() 
{ 
struct Bookinfo book[100]; 
int i,n; 
printf("\nEnter number of records you want to enter(less than or equal to:100)"); 
scanf("%d",&n); 
fflush(stdin); 
for(i=0;i<n;i++) 
    { 
    printf("\nEnter the Name of Book    : "); 
    gets(book[i].bname); 
    fflush(stdin);//It is used to clear the input buffer(stdin-Input taken from keyboard) 
    printf("\nEnter the Number of Pages : "); 
    scanf("%d",&book[i].pages); 
    fflush(stdin); 
    printf("\nEnter the Price of Book   : "); 
    scanf("%f",&book[i].price); 
    fflush(stdin); 
    } 
printf("\n--------- Book Details ------------ "); 
for(i=0;i<n;i++) 
    { 
    printf("\nName of Book    : %s",book[i].bname); 
    printf("\nNumber of Pages : %d",book[i].pages); 
    printf("\nPrice of Book   : %.2f",book[i].price); 
    } 
return 0; 
}