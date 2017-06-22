#include<stdio.h>
#include<conio.h>
struct library
{
char bookname[25];
char authorname[20];
int id;
char language[10];
}name,author,id1,language1;
void main()
{
clrscr();

printf("Enter the bookname\n");
scanf("%s",&name.bookname);

printf("Enter the authorname\n");
scanf("%s",&author.authorname);

printf("Enter the Book ID\n");
scanf("%d",&id1.id);

printf("Enter the Language\n");
scanf("%s",&language1.language);
printf("The Given Book Nmae is %s\n",name.bookname);
printf("The Given Author Nameis %s\n",author.authorname);
printf("The Given Book ID is %d\n",id1.id);

printf("The Given Book Nmae is %s\n",language1.language);
getch();
}




