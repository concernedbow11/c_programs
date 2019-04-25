#include<stdio.h>
void main()
{
   int n,i,a=0,b=1,c=0;
   printf("\nEnter the limit of fibonacci series: ");
   scanf("%d",&n);
   for(i=0;i<n;++i)
   {
      printf("%d ",a);
      c=b;
      b=a;
      a=b+c;
   }
}
