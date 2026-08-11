#include<stdio.h>
#include<conio.h>

int main()
{
clrscr();
int i,j;
i=1;
do
{
j=1;
do
{
printf("\t%d",j);
j++;
}
while(j<=i);
printf("\n");
i++;
}
while(i<=3);
getch();
}