#include<stdio.h>
#include<conio.h>

main()
{
clrscr();
int day;
printf("enter day no.(1-7):");
scanf("%d",&day);
switch(day)
{
case 1:
printf("Monday");
break;
case 2:
printf("Tuesday");
break;
case 3:
printf("Wednesday");
break;
case 4:
printf("Tursday");
break;
case 5:
printf("friday");
break;
case 6:
printf("Saterday");
break;
case 7:
printf("Sunday");
break;
default:
printf("Invalid day");
}
getch();
}