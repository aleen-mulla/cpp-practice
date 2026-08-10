#include<stdio.h>
#include<conio.h>
#include<string.h>

main()
{
clrscr();
char a[10];
printf("Enter a word=");
scanf("%s",&a);
printf("\nWord in lower case=%s",strlwr(a));
getch();
}