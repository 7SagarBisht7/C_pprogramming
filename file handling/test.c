// C Program to demonstrate the use of fseek()
#include <stdio.h>

int main()
{
    SYS
	FILE *fp;
	char str[12];
	fp = fopen("test.txt", "r");
	//printf("\n%ld", ftell(fp));
	// Moving pointer to end
	fseek(fp, 0, SEEK_END);
	printf("\n%ld", ftell(fp));
	fseek(fp, -4, SEEK_END);
    fscanf(fp,"%s",str);
printf("\n%s",str);
	// Printing position of pointer
	printf("\n%ld", ftell(fp));
	rewind(fp);
	printf("\n%ld", ftell(fp));
	fseek(fp, 2, SEEK_SET);
	fseek(fp,2,SEEK_CUR);
    fgets(str,12,fp);
	printf("\n%s",str);
	return 0;
}
