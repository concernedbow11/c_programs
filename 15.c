#include<stdio.h>
void main()
{
	int i,j,a[10][10],m,n,p,ctr=0;
	printf("\n\nEnter the no of rows and columns of matrix - \n");
	scanf("%d%d",&m,&n);
	printf("\nEnter the elemnts of A - \n");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	p=m*n;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			if(a[i][j]==0)
				ctr++;
	if(ctr>p/2)
		printf("\n\nIt is a sparse matrix");
	else
		printf("\n\nIt is not a sparse matrix");
}
