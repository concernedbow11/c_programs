/*swapping two numbers using call by reference*/

#include<stdio.h>
void swap(int *a,int *b);
void main()
{
	int a,b;
	int *ptr1,*ptr2;
	printf("Enter the value of a : ");
	scanf("%d",&a);
	printf("Enter the value of b : ");
	scanf("%d",&b);
	ptr1=&a;
	ptr2=&b;
	swap(ptr1,ptr2);
}
void swap(int *a,int *b)
{	
	int *temp=a;
	a=b;
	b=temp;
	printf("The value of a and b after swaping = %d , %d\n",*a,*b);
}
	

	

