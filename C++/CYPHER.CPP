#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
 char s[50],ch;
 int i,j;
 clrscr();
 cout<<"Enter String\n";
 gets(s);

 for(i=0;i<strlen(s);i++)
 {
  ch=s[i];
  if(ch==' ')
  {
   s[i]=' ';
  }
  else if(ch=='a')
  s[i]='z';
  else if(ch=='A')
  s[i]='Z';
  else
  {
   j=s[i];
   j=j-1;
   s[i]=j;

  }
 }
 cout<<"Decoded cypher text:\n";
 for(i=0;i<strlen(s);i++)
 {
  cout<<s[i];
 }
 getch();
}
