#include <stdio.h>
struct car{
	char name[20];
	int seats;
	float price;
};
int main()
{
struct car myCar = {"Renault",2, 500000};
struct car *myCarPtr; //define a pointer to car
myCarPtr = &myCar;  /*assign address of myCar to myCarPtr */
//->:-Pointing-to operator or selection operator
printf("\n%s %f %d",myCar.name, myCar.price, myCar.seats);
printf("\n%s %f %d",myCarPtr->name, myCarPtr->price, myCarPtr->seats);
printf("\n%s %f %d",(*myCarPtr).name, (*myCarPtr).price, (*myCarPtr).seats);
return 0;
} //end main