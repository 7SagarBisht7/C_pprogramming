#include<stdio.h>
int main()
{
	char s[]="Hello";
	int i=0;
	while(s[i]!='\0')
	{
		printf("%c",s[i]);
		i++;
	}
	return 0;
}


#include<stdio.h> 
int main() 
{ 
	char s[]="Hello"; 
	int i=0; 
	while(s[i]!='\0') 
	{ 
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') 
		{ 
			s[i]='$'; 
		} 
		i++; 
	} 
	printf("\nUpdated string is:%s",s); 
	return 0; 
}



#include<stdio.h> 
int main() 
{ 
	char s[]="Hello everyone this is C class"; 
	int i=0,count=0; 
	while(s[i]!='\0') 
	{ 
		if(s[i]==' ') 
		{ 
			count++; 
		} 
		i++; 
	} 
	printf("\nNumber of spaces in the given string:%d",count); 
	return 0; 
}