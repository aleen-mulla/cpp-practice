#include<stdio.h>
#include<conio.h>

struct std
{
public:
int s,t,m1,m2,m3;
char n[10],r[10],g;
float p;
};
int main()
{
clrscr();
struct std a[2];
int i;
for(i=0;i<2;i++)
{
printf("Enter sr no of student %d=",i+1);
scanf("%d",&a[i].s);
printf("Enter name of student %d=",i+1);
scanf("%s",&a[i].n);
printf("Enter marks of student %d=",i+1);
scanf("%d%d%d",&a[i].m1,&a[i].m2,&a[i].m3);
a[i].t=a[i].m1+a[i].m2+a[i].m3;
a[i].p=a[i].t/3;
}
printf("\n------------------------PCM MARKSHEET-------------------------------------\n");
printf("\nsr no.\tName\tPhysics\tchemistry  Maths\tTotal\tper\tResult\tGrade\n");
for(i=0;i<2;i++)
{
printf("\n%d",a[i].s);
printf("\t%s",a[i].n);
printf("\t%d\t%d\t%d",a[i].m1,a[i].m2,a[i].m3);
printf("\t%d",a[i].t);
printf("\t%.2f",a[i].p);
if(a[i].p>=35)
printf("\tPass");
else
printf("\tfail");
if(a[i].p>=90)
printf("\tA");
else if(a[i].p>=60 && a[i].p<90)
printf("\tB");
else if(a[i].p>=35 && a[i].p<60)
printf("\tC");
else
printf("\tF");
}
getch();
}