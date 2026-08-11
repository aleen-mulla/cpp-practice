#include<stdio.h>
#include<conio.h>

int main()
{
clrscr();
int i,s=0;


for(i=1;i<=10;i++)
{
printf("\n%d",i);
s=s+i;
}
printf("\nsum=%d",s);
getch();
}