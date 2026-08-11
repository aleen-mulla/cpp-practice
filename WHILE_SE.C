#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
clrscr();
int a,i;
printf("Enter value to search=");
scanf("%d",&a);
i=1;
while(i<=10)
{
printf("\n%d",i);
i++;
}
for(i=1;i<=10;i++)
{
if(i==a)
{
printf("\nFound");
getch();
exit(0);
}
}
printf("\nNot Found");
getch();
}