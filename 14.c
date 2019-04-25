#include<stdio.h>
void main()
{
	int a[20],b[10],s1,s2,i,j=0;
	printf("\nEnter size of Array A(max. 10): ");
	scanf("%d",&s1);
	printf("\nEnter elements: \n");
   	for(i=0;i<s1;++i)
    	scanf("%d",&a[i]);
    
    printf("\nEnter size of Array B(max. 10): ");
	scanf("%d",&s2);
	printf("\nEnter elements: \n");
   	for(i=0;i<s2;++i)
    	scanf("%d",&b[i]);
    
   printf("\n Merging....\n");
   for(i=s1,j=0;i<s1+s2;++i)
   	{
   		a[i]=b[j];
   		j++;
	}
   
   for(i=0;i<s1+s2;++i)
      printf("%d ",a[i]);
}
