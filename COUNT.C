#include<stdio.h>
#include<conio.h>

int main()
{
clrscr();
char a[10];
int i,c=0;
printf("\nEnter full  name=");
fflush(stdin);
gets(a);
for(i=0;a[i];i++)
{
if(a[i]==' ')
c++;
}
printf("\nCount=%d",c);
getch();
}
