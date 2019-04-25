#include<stdio.h>
void main()
{
   int n,i,j,flag;
   printf("\nEnter the limit: ");
   scanf("%d",&n);
   if(n<2)
      printf("\nNo prime numbers in the given range!");
   else
   {   
      printf("2 ");
      for(i=3;i<n;i++)
         {  
            flag=0;
            for(j=2;j<=i/2;j++)
            {
                 if(i%j==0)
                 {
                  flag=1;
                  break;
                 }
             }
             if(flag==0)
               printf("%d ",i);
         }
    }
 }
