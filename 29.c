#include <stdio.h>
void main()
{
	int num,sum=0,count=0,base,pow=1;
	printf("Enter the number : ");
	scanf("%d",&num);
	printf("Enter the base : ");
	scanf("%d",&base);
	while(num!=0)
	{	
		sum+=(num%10)*pow;
		num/=10;
		pow*=base;
	}
	printf("The result is %d\n",sum);
}
