#include <stdio.h> 
#include <stdlib.h> 
 
int main() 
{ 
    int *p,temp,largest = 0; 
    int i,n; 
    printf("enter n: "); 
    scanf("%d",&n); 
    p = (int*)calloc(n , sizeof(int)); 
    if(p != NULL) 
    { 
        printf("address of block: %d\n",p); 
        for(i=0;i<n;i+=1) 
        { 
            printf("%d\t",p[i]); 
        } 
        printf("\nenter %d numbers: ",n); 
        for(i=0;i<n;i+=1) 
        { 
            scanf("%d",&p[i]); 
            if(largest < p[i]) 
                largest = p[i]; 
        } 
        printf("\nlargest in %d: %d",n,largest); 
        temp = n; 
        printf("\nenter new n: "); 
        scanf("%d",&n); 
        p = realloc(p,n*sizeof(int)); 
        printf("\nenter next %d values: ",n-temp); 
        for(i;i<n;i++) 
        { 
            scanf("%d",&p[i]); 
            if(largest < p[i]) 
                largest = p[i]; 
        } 
        printf("largest in %d: %d",n,largest); 
        free(p); 
    } 
    return 0; 
}