#include<stdio.h>
#include<conio.h>
#include<string.h>

main()
{
clrscr();
char a[10],b[10];
printf("Enter names=");
scanf("%s%s",&a,&b);
printf("\nconcatenate name=%s",strcat(a,b));
getch();
}