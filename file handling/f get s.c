#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char str[10];
	fp=fopen("student1.txt","r");
	if(fp==NULL)
	{
		printf("\n File could not be opened");
		exit(1);
	}
	while(fgets(str,10,fp)!=NULL)
	printf("\n%s",str);
    fclose(fp);
    return 0;
}
