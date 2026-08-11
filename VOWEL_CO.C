#include<stdio.h>
#include<conio.h>

int main()
{
clrscr();

char x;
printf("\nEnter char=");
scanf("%c",&x);
if(x=='a' || x=='i' || x=='o' || x=='u' || x=='e')
{
printf("Char is vowel");
}
else
{
printf("char is consonent");
 }
getch();
}