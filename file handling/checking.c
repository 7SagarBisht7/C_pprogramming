#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char name[80];
	int roll_no;
	int x;
	fp=fopen("Checking.txt","r");
	if(fp==NULL)
	{
		printf("\n File could not be opened");
		exit(1);
	}
	/*printf("\nEnter the name and roll number of the student");
	//READ FROM KEYBOARD
	fscanf(stdin,"%s%d",name,&roll_no);
	printf("\n NAME:%s \t ROLL NUMBER=%d",name,roll_no);*/
	//READ FROM FILE student1.txt

	x=fscanf(fp,"%s%d",name,&roll_no);
    printf("\n NAME:%s\t ROLL NUMBER=%d",name,roll_no);
    printf("\n%d",x);//Number of values we are reading
    fclose(fp);
    return 0;
}
