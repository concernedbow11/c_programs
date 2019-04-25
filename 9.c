#include<stdio.h>
void main()
{
   int pos,l=0,u=10,num,flag=0,A[20],n,i;
   printf("\nEnter the size(Max. 20)");
   scanf("%d",&n);
   for(i=0;i<n;++i)
      scanf("%d",&A[i]);
   printf("Enter the element you want to search for");
   scanf("%d",&num);
   do
   {
      pos=(l+u)/2;
      if(A[pos]==num)
      {
         printf("Element found at position %d\n",pos+1);
         flag=1;
         break;
      }
      else if(A[pos]<=num)
         l=pos+1;
      else
         u=pos-1;
   }while(l<=u);
   if(flag==0)
      printf("Element not found!!\n");
}
