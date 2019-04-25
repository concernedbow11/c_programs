/*a program to compare two strings using pointers*/

#include<stdio.h>
void main()
{
	char *sptr1,*sptr2;
	char str1[50],str2[50];
	int l1=0,l2=0,i;
	sptr1=str1;
	sptr2=str2;
	printf("Enter the first string : ");
	scanf("%s",sptr1);
	printf("Enter the second string : ");
	scanf("%s",sptr2);
	for(i=0;*(sptr1+i)!='\0';i++)
		l1++;
	for(i=0;*(sptr2+i)!='\0';i++)
		l2++;
	if(l1>l2)
		printf("\nThe first string is larger\n");
	else
		printf("\nThe second string is larger\n");
}
