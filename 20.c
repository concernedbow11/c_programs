#include<stdio.h>
void main()
{
	int ch; 
	FILE *fp1,*fp2,*fp3;
	fp1=fopen("numbers","w");
	printf("\n\nEnter the numbers (press # to terminate)\n");
	while((ch=getchar())!='#')
		putc(ch,fp1);
	fclose(fp1);
	fp1=fopen("numbers","r");
	fp2=fopen("odd","w");
	fp3=fopen("even","w");
	while((ch=getc(fp1))!=EOF)
	{
		if(ch%2==0)
			putc(ch,fp3);
		else
			putc(ch,fp2);
	}
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
	fp2=fopen("odd","r");
	fp3=fopen("even","r");
	printf("\nContents of file with odd numbers: \n");
	while((ch=getc(fp2))!=EOF)
		printf("%c",ch);
	printf("\nContents of file with even numbers: \n");
	while((ch=getc(fp3))!=EOF)
		printf("%c",ch);	
	fclose(fp2);
	fclose(fp3);
}
