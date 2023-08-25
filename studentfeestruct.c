#include<stdio.h>
struct student
{
	char name[20];
	int r_no;
	float fees;
};
int main()
{
	struct student s1={"Aniket",23,230.56};
	struct student s2={"Suhail",24,550.56};
	printf("\n%s %d %.2f",s1.name,s1.r_no,s1.fees);
	printf("\n%s %d %.2f",s2.name,s2.r_no,s2.fees);
	return 0;
}