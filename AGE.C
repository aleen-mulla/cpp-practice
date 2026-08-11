#include<stdio.h>
#include<conio.h>

int main()
{
clrscr();
int i,b;
char a[10];
printf("Enter name and age=");
scanf("%s%d",&a,&b);
for(i=1;i<=b;i++)
{
printf("\n%d%s",i,a);
}
getch();
}