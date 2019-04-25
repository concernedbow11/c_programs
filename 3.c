#include<stdio.h>

void main(){
   int num,sum,rev;
   char choice;
   printf("\n1. Find sum of digits\n2. Find reverse of digits\n");
   scanf("%c",&choice);
   if(choice=='1')
   {
      printf("\nEnter the number: ");
      scanf("%d",&num);
      sum=0;
      do\
      {   
         sum+=num%10;
         num/=10;
      }while(num!=0);
         
      printf("The sum of digits is: %d",sum);}
   else if(choice=='2')
   {
         printf("\nEnter the number: ");
         scanf("%d",&num);
         rev=0;
         do
         {
            rev*=10;
            rev+=num%10;
            num/=10;
         }while(num!=0);
         printf("\nThe reverse of the number is: %d",rev);
   }
   else
      printf("\nWrong choice!!");
}
