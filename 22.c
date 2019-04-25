#include<stdio.h>
#include<string.h>
void main()
{
	int	j=0,b[26];
	char a[30];
	for(int i=0;i<26;i++)
		b[i]=0;
	printf("\nEnter the string: ");
	scanf("%s",a);
	while (a[j]) 
	{ 
		a[j]=toupper(a[j]);
		j++;
	} 
	for(int i=0;i<strlen(a);i++)
	{
		if(isalpha(a[i]))
			{
				b[a[i]-65]+=1;
			}
	}
	for(int i=0;i<26;i++)
	{
	 		if(b[i]!=0)
		{
			printf("%c: %d\n",i+65,b[i]);
		}
	}
}
