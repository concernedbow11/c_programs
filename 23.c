#include<stdio.h>

void main(){
	int h,m,s,t;
	printf("Enter the time in seconds: ");
	scanf("%d",&t);
	h=t/3600;
	m=t/60-h*60;
	s=t-(h*3600)-(m*60);
	printf("\n The time is %d:%d:%d",h,m,s);
}
