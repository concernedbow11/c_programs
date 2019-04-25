#include<stdio.h>
main()
{ int p,n,r,i,s,temp;
float c;
printf("enter p,n,r");
scanf("%d %d %d",&p,&n,&r);
  s=p*n*r;
  i=1;
  temp=1;
  while(i<n)
  { temp*=(1+r);
    i+=1;
  }
c=p*temp-p;
printf("simple interest=%d compound interest=%f",s,c);
}  
