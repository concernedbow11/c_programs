#include<stdio.h>

struct book
{
    int Book_id;
    char Title[50],Author[50],Trace[20];
}b1;
void main()
{
    printf("Enter the book ID, title, author's name and trace");
    scanf("%d",&b1.Book_id);
    while(getchar()!='\n');
   
    fgets(b1.Title,50,stdin);
    if(b1.Title=="\n")
        gets(b1.Title);
    fgets(b1.Author,50,stdin);
    fgets(b1.Trace,50,stdin);
    
    printf("Book id is %d\nBook title is %sAuthor is %sTrace is %s",b1.Book_id,b1.Title,b1.Author,b1.Trace);
}
