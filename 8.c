#include<stdio.h>
void main()
{
   int A[20],n,i,num,flag=0;
   printf("\nEnter the size(Max. 20)");
   scanf("%d",&n);
   for(i=0;i<n;++i)
      scanf("%d",&A[i]);
   printf("\nEnter element to search for: ");
   scanf("%d",&num);
   for(i=0;i<n;++i)
      if(A[i]==num)
      {
         flag=1;
         printf("\nElement found at %d",i+1);
         break;
      }
   if(flag==0)
      printf("\nElement not found!\n");
}
