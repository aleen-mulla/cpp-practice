#include<stdio.h>
#include<conio.h>

int main()
{
clrscr();
int a,b,c,d;
printf("Enter values");
scanf("%d%d",&a,&b);
c=a/b;
d=a%b;
printf("Answer=%d\nReminder=%d",c,d);
getch();
}