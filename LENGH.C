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
printf("Output=%d",i);

getch();
}