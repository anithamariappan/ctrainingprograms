#include<stdio.h>
#include<conio.h>
void main()
{
float p,n,r,s,v;
clrscr();
printf("Enter the Principal Value :");
scanf("%f",&p);
printf("Enter the Rate of Interest  :");
scanf("%f",&r);
printf("Enter the Year :");
scanf("%f",&n);
s=p*n*r;
v=s/100;
printf("Simple Interest is :%.3f ",v);
getch();
}