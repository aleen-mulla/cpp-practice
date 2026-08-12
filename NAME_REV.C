#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
clrscr();
int i,j,temp;
char a[10];
printf("Enter name=");
scanf("%s",&a);
for(i=0,j=strlen(a)-1;i<j;i++,j--)
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
printf("%s",a);
getch();
}
