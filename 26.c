/*A program to find the sum of n numbers using recursive function*/

#include<stdio.h>
int sum(int n);
void main()
{
	int n,s=0;
	printf("Enter the limit : ");
	scanf("%d",&n);
	s=sum(n);
	printf("The sum of %d natural numbers = %d \n",n,s);
}
int sum(int n)
{	if(n>0)
		return (n+sum(n-1));
	else
		return 0;
}

