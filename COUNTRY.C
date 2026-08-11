#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
clrscr();
char a[10];
printf("Enter name of country=");
scanf("%s",a);
if(strcmp(a,"india")==0)
printf("\nDelhi");
else if(strcmp(a,"usa")==0)
printf("\nWashington DC");
else if(strcmp(a,"china")==0)
printf("\nBeiging");
else if(strcmp(a,"japan")==0)
printf("\nTokyo");
else if(strcmp(a,"Brazil")==0)
printf("\nBrazilia");
else
printf("\nsorry");
getch();
}
