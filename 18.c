#include<stdio.h>
void main()
{
	int a,b,*c,*d,swap;
	printf("\n\nEnter a and b: \n");
	scanf("%d",&a);
	scanf("%d",&b);
	printf("\n\nThe values before swapping are a=%d and b=%d",a,b);	
	c=&a;
	d=&b;
	swap=*c;
	*c=*d;
	*d=swap;
	printf("\n\nThe values after swapping are a=%d and b=%d \n\n",a,b);
}
