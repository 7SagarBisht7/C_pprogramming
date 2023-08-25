#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char str[10000];
	int i=0,ch;
	fp=fopen("student1.txt","r");
	if(fp==NULL)
	{
		printf("\n The file could not be opened");
		exit(1);
	}
	ch=fgetc(fp);
	while(ch!=EOF)
	{
		
		str[i]=(char)ch;
		ch=fgetc(fp);
		i++;
	}
	str[i]='\0';
	printf("\n%s",str);
	fclose(fp);
}