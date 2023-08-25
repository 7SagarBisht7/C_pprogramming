#include<stdio.h>
int main()
{
	char names[5][10];
	int i,n;
	printf("\n Enter the number of students:");
	scanf("%d",&n);
	fflush(stdin);
	for(i=0;i<n;i++)
	{
		printf("\n Enter the name of student %d: ",i+1);
		gets(names[i]);
	}
	printf("\n Names of the students are:\n");
	for(i=0;i<n;i++)
	puts(names[i]);
	return 0;
}