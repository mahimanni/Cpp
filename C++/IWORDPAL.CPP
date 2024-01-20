#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

void main()
{
 char s[100],s1[100];
 int i,j=0,k,l,f=0;
 clrscr();

 cout<<"Enter string";
 gets(s);

 s1[j]=s[0];
 j++;

 for(i=1;i<strlen(s);i++)
 {
   if(s[i]==' ')
   {
    s1[j]=s[i+1];
    j++;
   }
 }
 s1[j]=NULL;

 l=strlen(s1)-1;

 for(k=0;k<=strlen(s1)/2;k++)
 {
  if(s1[k]!=s1[l])
  {
   f++;
  }
  l--;
 }
 if(f>0)
 cout<<"Word Obtained is not palindrome";
 else
 cout<<"Word obtained is palindrome";
 getch();
}
















