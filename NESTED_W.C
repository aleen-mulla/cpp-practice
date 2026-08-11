#include<stdio.h>
#include<conio.h>

int main()
{
clrscr();
int i,j;
i=3;
while(i>=1)
{
j=1;
while(j<=i)
{
printf("\t%d",j);
j++;
}
printf("\n");
i--;
}

getch();
}