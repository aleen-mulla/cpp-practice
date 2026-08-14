#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

main()
{
clrscr();
FILE *fs,*ft;
char ch;
fs=fopen("float.c","r");
if(fs==NULL)
{
puts("Cannot open  file");
exit(0);
}
ft=fopen("sample.c","w");
while(1)
{
ch=fgetc(fs);
if(ch==EOF)
{
break;
}
else
{
fputc(ch,ft);
}
}
fclose(fs);
fclose(ft);
ft=fopen("sample.c","r");
if(ft==NULL)
{
puts("cannot open file");
exit(1);
}
while(1)
{
ch=fgetc(ft);
if(ch==EOF)
break;
else
printf("%c",ch);
}
fclose(ft);
getch();
}