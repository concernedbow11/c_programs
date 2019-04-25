#include<stdio.h>


struct cmplx

{
  
float real,img;

}p,q;



struct cmplx readcomplex()

{
 
 struct cmplx t;  
 printf("Enter the real part of the complex number");
 
 scanf("%f",&t.real);

 printf("Enter the imaginary part of the complex number");

 scanf("%f",&t.img);
   
 return t;
}

void writecomplex(struct cmplx t)
{
printf("%f+i%f",t.real,t.img);
}

void addnsub()
{
printf("Sum of the numbers is %f+i%f",p.real+q.real,p.img+q.img);
printf("\nDifference of the numbers is %f+i%f",p.real-q.real,p.img-q.img);
}

void multiply()
{
printf("Product is %f+i%f",(p.real * q.real) - (p.img * q.img),(p.real * q.img) + (p.img * q.real));
}

void divide()
{
float real,img;
real=((p.real * q.real) + (p.img * q.img)) / ((q.real * q.real) + (q.img * q.img));
img=((p.img * q.real) - (p.real * q.img)) / ((q.real * q.real) + (q.img * q.img));
printf("\nQuotient is %f+i%f",real,img);
}

void main()
{
int ch;
do
{
printf("\nMenu \n1.Read a complex number \n2. Write a complex no: \n3.Add and subtract complex nos: \n4.Multiply and divide \n5.Exit");
printf("\nEnter a choice");
scanf("%d",&ch);
switch(ch)
{
case 1: printf("\nFor first complex no:");
        p=readcomplex();
        printf("\nFor second complex no:");
        q=readcomplex();
        break;

case 2: printf("First complex number is");
	writecomplex(p);
 	printf("Second complex number is");
	writecomplex(q);
	break;

case 3: addnsub();
	break;

case 4: multiply();
	divide();
	break;

case 5: ch=0;
	break;
}
}
while(ch!=0);
}


 
