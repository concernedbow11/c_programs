#include<stdio.h>
void main()
{
	int i,j,a[10][10],m,n,flag=0;
	printf("\n\nEnter the no of rows and columns of matrix - \n");
	scanf("%d%d",&m,&n);
	printf("\nEnter the elemnts of A - \n");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			if(i>=j && a[i][j]!=0)
				flag=1;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)  
	    	printf("%d ",a[i][j]);
		printf("\n");
	}
	      
	if(flag==0)
		printf("\n\nIt is strictly upper triangular");
	else
		printf("\n\nIt is not strictly upper traingular");
	
}
