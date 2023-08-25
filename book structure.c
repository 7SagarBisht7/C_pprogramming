#include<stdio.h>
#include<string.h>

struct book {
   char b_name[30];
   float b_price;
   int no_of_pages;
};

int main() {
   struct book book1, book2;

   // Creating the first book
   strcpy(book1.b_name, "c programming");
   book1.b_price = 1200;
   book1.no_of_pages = 560;

   // Creating the second book
   strcpy(book2.b_name, "Python");
   book2.b_price = 800;
   book2.no_of_pages = 380;

   // Printing the details of the first book
   printf("Book 1:\n");
   printf("Name: %s\n", book1.b_name);
   printf("Price: Rs %.2f\n", book1.b_price);
   printf("Number of Pages: %d\n", book1.no_of_pages);

   // Printing the details of the second book
   printf("\nBook 2:\n");
   printf("Name: %s\n", book2.b_name);
   printf("Price: Rs %.2f\n", book2.b_price);
   printf("Number of Pages: %d\n", book2.no_of_pages);

   return 0;
}
