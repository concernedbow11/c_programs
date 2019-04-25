#include<stdio.h>
#include<math.h>
void main()
{
   int ch,a,b;
   char choice;
   choice='y';
   do{
         printf("\nCALCULATOR\n__________\n1.Add\n2.Subtract\n3.Mulitply\n4.Divide\n5.Modulus\nEnter your choice: ");
         scanf("%d",&ch);
         switch(ch)
         {  
            case 1: printf("\nEnter numbers to add: ");
                    scanf("%d%d",&a,&b);
                    printf("\nThe sum is: %d\n",a+b);
                    break;
            case 2: printf("\nEnter numbers to subtract: ");
                    scanf("%d%d",&a,&b);
                    printf("\nThe difference is: %d\n",a-b);
                    break;
            case 3: printf("\nEnter numbers to multiply: ");
                    scanf("%d%d",&a,&b);
                    printf("\nThe product is: %d\n",a*b);
                    break;
            case 4: printf("\nEnter numbers to divide: ");
                    scanf("%d%d",&a,&b);
                    printf("\nThe quotient is: %d\n",a/b);
                    break;
            case 5: printf("\nEnter numbers to find remainder: ");
                    scanf("%d%d",&a,&b);
                    printf("\nThe remainder is: %d\n",a%b);
                    break;
            default:printf("\nWRONG CHOICE\n");
                    break;
         }
         printf("\nDo you want to continue?(y/n)");
         scanf("%s",&choice);
  }while(choice=='y');
}
  
      
