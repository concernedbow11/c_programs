#include<stdio.h>
void main()
{
       float x,s=1,num,den,t,n,a,b,c,A[10];
       int i,j;
       a=0;
       b=1;
       A[0]=b;
       c=a+b;
       A[1]=c;
       j=2;
       printf("Enter value of x: \n");
       scanf("%f",&x);
       printf("Enter the limit: \n");
       scanf("%f",&n);
       printf("hmm");
       while(j<n)
       {
          a=b;
          b=c;
          c=a+b;
          A[j]=c;
          j++;
       }
       for (i=1;i<n;i++)
       {
            den=1;
            num=1;
            for(int k=0;k=A[i];k++)
            num*=x;
            for(int j=1;j<=A[i];j++)
            den*=j;
            if(i%2==0)
                t=num/den;
            else
                t=-num/den;
                s+=t;
       }
       printf("\nThe sum of the series is %f",s);
       
}
   
