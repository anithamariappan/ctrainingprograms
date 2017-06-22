#include<stdio.h>
#include<conio.h>
void main()
{
char a[10];
int age,id,sal;
float tax,income;
clrscr();
printf("Enter the name  :");
scanf("%s",&a);

printf("Enter the Age  :");
scanf("%d",&age);

printf("Enter the id  :");
scanf("%d",&id);

printf("Enter the Salary  :");
scanf("%d",&sal);
tax=sal/8;
printf("Tax %.3f\n",tax);
income=tax/100;
printf("Income %.3f\n",income);
getch();
}


