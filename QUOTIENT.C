#include<stdio.h>
#include<conio.h>

void main()
{
int a,b,f;
int r;
clrscr();

printf("Enter the first number\n");
scanf("%d",&a);
printf("Enter the Second number\n");
scanf("%d",&b);
f=a/b;
printf ("Quotient %d\n",f);
r=a%b;
printf ("Remainder %d\n",r);
getch();
}
