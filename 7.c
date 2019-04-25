#include<stdio.h>
#include<math.h>
void main()
{
   float x,sum=1,i=0,num=1,den=1;
   int n;
   printf("Enter value of x");
   scanf("%f",&x);
   printf("Enter the limit");
   scanf("%d",&n);
   n*=2;
   i=2;
   while(i<n)
      {
         
         num*=x*x*(-1);
         den=tgamma(i+1);
         sum+=(num/den);
         i+=2;
      }
   printf("Sum=%f",sum);
}   
