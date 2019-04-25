#include<stdio.h>
void main()
{
	int i;
	enum days {sunday=1,monday,tuesday,wednesday,thursday,friday,saturday};
	for(i=sunday;i<=saturday;++i)
	{
		printf("%d ",i);
	}
}
