#include<stdio.h>
union employee
{
	char name[30];
	int id;
	float salary;
}u[100];
int main()
{
	//union employee u[100];
	int n,i;
	printf("\n Enter value of n:");
	scanf("%d",&n);
	fflush(stdin);
	for(i=0;i<n;i++)
	{
	printf("\n Enter name:");
	fflush(stdin);
	gets(u[i].name);
	printf("\n Entered name is:%s",u[i].name);
	printf("\n Enter id:");
	fflush(stdin);
	scanf("%d",&u[i].id);
	printf("\n Entered id is:%d",u[i].id);
	printf("\n Enter salary:");
	fflush(stdin);
	scanf("%f",&u[i].salary);
	printf("\n Entered salary is:%.2f",u[i].salary);
    }
	return 0;
}