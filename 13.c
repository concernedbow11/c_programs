#include<stdio.h>
void main()
{
	int a[10],n,i,small,large,largent;
	printf("\nEnter the number of elements in the array: ");
	scanf("%d",&n);
	printf("\nEnter the elements of the array: \n");
	for(i=0;i<n;++i)
		scanf("%d",&a[i]);
	small=large=largent=a[0];
	for(i=0;i<n;++i)
	{
		if(a[i]<small)
			small=a[i];
		if(a[i]>large)
		{
			largent=large;
			large=a[i];
		}
	}
	printf("\nThe smallest is %d, The largest is %d,The second largest is %d\n",small,large,largent);
}
