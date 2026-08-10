#include<stdio.h>
#include<conio.h>
#include<string.h>

main()
{
clrscr();
char a[10];
printf("Enter a word=");
scanf("%s",&a);
printf("\nWord in reverse order=%s",strrev(a));
getch();
}