#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr,n,m,i;
	printf("\n Enter initial value of n:");
	scanf("%d",&n);
	ptr=(int *)calloc(n,sizeof(int));
	if(ptr==NULL)
	{
		printf("\n Memory allocation failure(calloc())");
		exit(1);
	}
	else
	{
		printf("\n Memory allocation successful");
		printf("\n Enter values as per initial requirement:");
		for(i=0;i<n;i++)
		{
			scanf("%d",ptr+i);
		}
		printf("\n Entered values are:");
		for(i=0;i<n;i++)
		{
			printf("\n%d",*(ptr+i));
		}
		m=n;
		printf("\n Enter new value of n for reallocation:");
		scanf("%d",&n);
		ptr=(int *)realloc(ptr,n*sizeof(int));
		if(ptr==NULL)
		{
			printf("\n Memory allocation failure while reallocation");
			exit(2);
		}
		else
		{
			printf("\n Memory reallocated successfully");
			printf("\n Enter new values as per requirement");
			for(i=m;i<n;i++)
			{
				scanf("%d",ptr+i);
			}
			printf("\n All values entered are(old+new):");
			for(i=0;i<n;i++)
			{
				printf("\n%d",*(ptr+i));
			}
		}
		free(ptr);
		printf("\n Memory deallocated");
	}
	return 0;
}