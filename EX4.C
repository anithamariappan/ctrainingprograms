#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("Enter the Value : ");
scanf("%d",&a);
if(a%2==0)
printf("The Given number is even %d\n ",a);
else
printf("The Given Number is odd %d",a);
getch();
}