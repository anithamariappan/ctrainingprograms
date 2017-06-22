#include<stdio.h>
#include<conio.h>
void main()
{
int leap;
clrscr();
printf("Enter the year to be checked:");
scanf("\t%d",&leap);
if((leap%4)==0)
{
if((leap%100)==0)
{
if((leap%400)==0)
{
printf("The Given Year is Leap Year %d",leap);
}
else
{
printf("The Given Year is not a leap year %d",leap);
}
}
else
{
printf("The Given Year is not a leap year %d",leap);
}
}
else
{
printf("The Given Year is not a leap year %d",leap);
}
getch();
}


