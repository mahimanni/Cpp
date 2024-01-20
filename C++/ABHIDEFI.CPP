#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
 char s[20];
 int i,j,f,g=0,p;
 clrscr();
 cout<<"Enter the String:";
 gets(s);

/* for(i=65;i<=90;i++)
 {
	  f=0;
   for(j=0;j<strlen(s);j++)
   {
    if(s[j]==i)
    {
    f=1;
    break;
    }
   }
    if(f!=1)
    s[j]=s[j]-32;
 }
  puts(s); */
 for(i=0;i<strlen(s)-1;i++)
 {
  p=s[i];
  if(s[i+1]==p+1)
  {
  cout<<"\nCharacters in alphabetical order are:\n";
  cout<<s[i]<<s[i+1]<<" ";
  g++;
  }
 }

 if(g==0)
 cout<<"No characters in alphabetical order\n";

 getch();
}




