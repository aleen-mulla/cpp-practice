#include<stdio.h>
#include<conio.h>

int main()
{
clrscr();
char a[10];
int i;
printf("Enter word=\n");
scanf("\n%s",&a);
for(i=0;a[i];i++);
printf("\n%c",a[i-1]);
getch();
}