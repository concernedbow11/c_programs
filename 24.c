#include<stdio.h>

void main()
{
    int a[50],num,i;
    float mean=0;
    printf("Ener the number of elements ");
    scanf("%d",&num);
    printf("Enter the elements\n");
    for(i=0;i<num;i++)
        scanf("%d",&a[i]);
    for(i=0;i<num;i++)
        mean+=*(a+i);
    
    mean/=num;
    printf("Mean is %f",mean);
}
