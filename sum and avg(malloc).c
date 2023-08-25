#include<stdio.h> 
#include<stdlib.h> 
int main() 
{ 
	float *p,sum=0.0f,avg; 
	int n,i; 
	printf("\nEnter number of values:"); 
	scanf("%d",&n); 
	p=(float*)malloc(n*sizeof(float)); 
	if(p==NULL) 
	{ 
		printf("\nMemory allocation failure!!!"); 
		exit(1); 
	} 
	else 
	{ 
		printf("\nMemory allocation was successful!!"); 
		printf("\nAddress where pointer is pointing:%u",p); 
		printf("\nEnter %d values(floating type):",n); 
		for(i=0;i<n;i++) 
		{ 
			scanf("%f",p+i); 
		} 
		for(i=0;i<n;i++) 
		{ 
			sum=sum+*(p+i); 
		} 
		avg=sum/n; 
		printf("\nSum is:%.2f and average is:%.2f",sum,avg); 
		free(p); 
	} 
	return 0; 
}