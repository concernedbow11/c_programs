#include<stdio.h>
void main()
{
   int arr[20],size,i,j,temp,small,pos;
   printf("\nEnter size(max. 20): ");
   scanf("%d",&size);
   printf("\nEnter elements: \n");
   for(i=0;i<size;++i)
      scanf("%d",&arr[i]);
   for(i=0;i<size;++i)
      for(j=i+1;j<size;++j)
         if(arr[j]<arr[i])
         {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
         }  
   printf("\nThe sorted array is: \n");
   for(i=0;i<size;++i)
      printf("%d ",arr[i]);
}
      
