#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,e;
clrscr();
printf("Enter The First  Numbers :");
scanf("%d",&a);
printf("Enter The Second Number :");
scanf("%d",&b);
printf("Enter The choice\n");
printf("1.Addition\n");
printf("2.subtraction\n");
printf("3.Multiplication\n");

printf("4.Division\n");
scanf("%d",&c);

switch(c)
{
case 1:

printf("Addition\n");
e=a+b;
printf("Addition Of 2 Numbers %d\n",e);
break;


case 2:

printf("Subtraction\n");
e=a-b;
printf("Subtraction Of 2 Numbers %d\n",e);
break;

case 3:

printf("Multiplication\n");
e=a*b;
printf("Multiplication Of 2 Numbers %d\n",e);
break;

case 4:

printf("Division\n");
e=a/b;
printf("Division  Of 2 Numbers %d\n",e);
break;


default:
printf("Choose between Choices");


}
getch();
}

