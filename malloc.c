#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,n,i;
	printf("\nEnter number of values:");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	if(p==NULL)
	{
		printf("\nMemory allocation failure!!!");
		exit(1);
	}
	else
	{
		printf("\nMemory allocation was successful!!");
		printf("\nAddress where pointer is pointing:%u",p);
		/*printf("\nEnter %d values:",n);
		for(i=0;i<n;i++)
		{
			scanf("%d",p+i);
		}*/
		printf("\nValues you entered are:");
		for(i=0;i<n;i++)
		{
			printf("\n%d",*(p+i));
		}
		free(p);
	}
	return 0;
}