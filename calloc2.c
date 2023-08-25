#include<stdio.h> 
#include<stdlib.h> 
int main() 
{ 
	int *p,n,i,key,index=-1; 
	printf("\nEnter number of values:"); 
	scanf("%d",&n); 
	p=(int*)calloc(n,sizeof(int)); 
	if(p==NULL) 
	{ 
		printf("\nMemory allocation failure!!!"); 
		exit(1); 
	} 
	else 
	{ 
		printf("\nMemory allocation was successful!!"); 
		printf("\nAddress where pointer is pointing:%u",p); 
		printf("\nEnter %d values:",n); 
		for(i=0;i<n;i++) 
		{ 
			scanf("%d",p+i); 
		} 
		printf("\nEnter value to search:"); 
		scanf("%d",&key); 
		for(i=0;i<n;i++) 
		{ 
			if(*(p+i)==key) 
			{ 
				index=i; 
				break; 
			} 
		} 
		if(index!=-1) 
		{ 
			printf("\nElement is found at index:%d and exact location:%d",index,index+1); 
		} 
		else  
		{ 
			printf("\nElement not found!!!"); 
		} 
		free(p); 
	} 
	return 0; 
}