#include<stdio.h>

void main(){
   int n,fact=1;
   printf("\nEnter the number: ");
   scanf("%d",&n);
   while(n!=0){
      fact=fact*n;
      n--;}
   printf("\nFactorial is: %d\n",fact);
   }
