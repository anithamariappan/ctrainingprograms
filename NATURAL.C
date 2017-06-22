#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,s=0;
clrscr();

printf("Enter the Positive numbers\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
s=s+i;
}
printf("Natural Numbers %d",s);
getch();
}