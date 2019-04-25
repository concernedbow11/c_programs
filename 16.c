#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,j,a[10][10],b[10][10],c[10][10],k,m,n,p,q,ch;
	char choice='y';
	while(choice=='y')
	{
		printf("\n\n\n\nMATRIX OPERATIONS\n______________\n1.Add\n2.Multiply\n3.Transpose\n4.Exit\nEnter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: 	printf("Enter the no of rows and columns of matrix - ");
	   					scanf("%d%d",&m,&n);
						printf("\nEnter the elemnts of A - \n");
						for(i=0;i<m;i++)
							for(j=0;j<n;j++)
								scanf("%d",&a[i][j]);
						printf("\nEnter the elemnts of B - \n");
					   	for(i=0;i<m;i++)
							for(j=0;j<n;j++)
								scanf("%d",&b[i][j]);
						for(i=0;i<m;++i)
							for(j=0;j<n;++j)
								c[i][j]=a[i][j]+b[i][j];
						printf("\nThe Resultant matrix is - \n");
						for(i=0;i<m;++i)
						{	
							printf("\n");
							for(j=0;j<n;++j)
								printf("%d ",c[i][j]);
						}
						break;
			
			case 2:    printf("Enter the no of rows and columns of mat A - ");
   						scanf("%d%d",&m,&n);
					   printf("Enter the no of rows and columns of mat B - ");
					   scanf("%d%d",&p,&q);
					   if(n!=p)
						{
							printf("\nCannot multiply the two matrices!!!!!!!\n");
					   		break;
					   	}	
					   printf("Enter the elemnts of A - \n");
					   for(i=0;i<m;i++)
						 for(j=0;j<n;j++)
						   scanf("%d",&a[i][j]);
						   
					   printf("Enter the elemnts of B - \n");
					   for(i=0;i<p;i++)
						 for(j=0;j<q;j++)
						   scanf("%d",&b[i][j]);

						for(i=0;i<m;i++)
						  for(j=0;j<q;j++)
							c[i][j]=0;
						 
					   for(i=0;i<m;i++)
						 for(j=0;j<q;j++) 
						   for(k=0;k<n;k++)
							 c[i][j]+=a[i][k]*b[k][j];
					   printf("Resultant C is - \n");      
					   for(i=0;i<m;i++)
						{
							for(j=0;j<q;j++)
						  	printf("%d ",c[i][j]);     
							printf("\n");
						}
						break;
			
			case 3:		
						printf("\nEnter the no of rows and columns of mat A - ");
						scanf("%d%d",&m,&n);
						printf("\nEnter the elemnts of A - \n");
						for(i=0;i<m;i++)
						  for(j=0;j<n;j++)
							scanf("%d",&a[i][j]);
						 for(i=0;i<n;i++)
						  for(j=0;j<m;j++) 
							  c[i][j]=a[j][i];
						printf("\nMatrix is - \n");      
						for(i=0;i<m;i++)
						 {
						 for(j=0;j<n;j++)
						   printf("%d ",a[i][j]);     
						 printf("\n");
						 }
						 
						printf("\nTranspose is - \n");      
						for(i=0;i<n;i++)
						 {
						 for(j=0;j<m;j++)
						   printf("%d ",c[i][j]);     
						 printf("\n");
						 }
						break;
			
			case 4:		choice='n';
						break;
			
			default:	choice='n';
		
		}				
	}
}
