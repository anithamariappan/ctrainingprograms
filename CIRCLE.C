#include<stdio.h>
#include<conio.h>

void main()
{
float a,b,d;
float pi=3.14;
clrscr();
printf("Enter the Radius\n");
scanf("%f",&a);
b=pi*a*a;
printf("Area Of Circle %.3f\n",b);
d=2*pi*a;
printf("Perimeter of Circle %.3f\n",d);
getch();
}
