#include<stdio.h> 
#include<string.h> 
int main() 
{ 
	char str1[6]="Hello"; 
	char str3[6],str4[2]; 
	char str5[15]="Strings",str6[6]="Class"; 
	char str7[3]="WE",str8[4]="are"; 
	char str9[4]="HOW",str10[4]="how"; 
	char str11[12]="Programming",str12[9]="Programs"; 
	int x; 
	strcpy(str3,str1); 
	puts(str3); 
	strncpy(str4,str1,1); 
	str4[1]='\0'; 
	puts(str4); 
	strrev(str3); 
	puts(str3); 
	strcat(str5,str6); 
	puts(str5); 
	strncat(str5,str6,2); 
	puts(str5); 
	strlwr(str7); 
	puts(str7); 
	strupr(str8); 
	puts(str8); 
	x=strcmp(str9,str10); 
	printf("\n%d",x); 
	x=stricmp(str9,str10); 
	printf("\n%d",x); 
	x=strncmp(str11,str12,7); 
	printf("\n%d",x); 
	printf("\n%d",strlen(str9)); 
	return 0; 
}