#include<stdio.h>
#include<math.h>
void main()
{
   float a,b,c,r1,r2,d,real,ima;
   printf("\nEnter a,b,c: ");
   scanf("%f%f%f",&a,&b,&c);
   if(a==0)
   {
      printf("\nNot Quadratic");
   }
   else
      {
         d=(b*b)-(4*a*c);
         if(d>0)
         {
            r1=(-b+(sqrt(d))/(2*a));
            r2=(-b-(sqrt(d))/(2*a));
            printf("%f,%f",r1,r2);
         }
         else if(d==0)
         {
            r1=r2=(-b)/(2*a);
            printf("\nEqual roots: %f,%f",r1,r2);
         }
         else
         {
            real=-b/(2*a);
            ima=sqrt(abs(d))/(2*a);
            printf("\nImaginary Root 1: %f+%fi",real,ima);
            printf("\nImaginary Root 2: %f-%fi",real,ima);
         }
      }
}
