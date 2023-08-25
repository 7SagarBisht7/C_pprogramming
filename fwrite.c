#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	int count;
	char str[]="Programming in C";
	fp=fopen("Welcome.txt","w");
	if(fp==NULL)
	{
		printf("\n The file could not be opened");
		exit(1);
	}
	count=fwrite(str,1,strlen(str),fp);//void *,size,no.of objects,file pointer
	printf("\n%d bytes were written to the file",count);
	fclose(fp);
	return 0;
}
