#include<stdio.h>
#include<conio.h>
void main()
{
int n,i=2;
clrscr();
printf("Enter n Values :\n");
scanf("%d",&n);
printf("Outside the loop: %d\n",n);
if(i<=n)
{
i++;
printf("Inside : %d\n",i);
}
printf("Outside the Loop %d ",n);
getch();
}

