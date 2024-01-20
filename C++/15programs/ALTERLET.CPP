#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char s[100];
 int i;
 cout<<"Enter string:\n";
 gets(s);

 for(i=0;i<strlen(s);i++)
 {
  if(s[i]==' ')
  s[i]=' ';
  else if(s[i]>=65&&s[i]<=90)
  s[i]=s[i]+32;
  else
  s[i]=s[i]-32;
 }
 cout<<"String after alternation of each letter is:\n"<<s;
 getch();
}














