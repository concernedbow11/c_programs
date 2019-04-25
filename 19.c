#include<stdio.h>
void main()
{
	char ch; 
	FILE *fp1,*fp2;
	fp1=fopen("text1","w");
	printf("\n\nEnter the contents of file 1 (press # to terminate)\n");
	while((ch=getchar())!='#')
		putc(ch,fp1);
	fclose(fp1);
	fp1=fopen("text1","r");
	fp2=fopen("text2","w");
	while((ch=getc(fp1))!=EOF)
		putc(ch,fp2);
	fclose(fp1);
	fclose(fp2);
	printf("the contents of the new file are as follows : \n\n");
	fp1=fopen("text2","r");
	while((ch=getc(fp1))!=EOF)
	{	
		printf("%c",ch);
	}
	fclose(fp1);
} 
