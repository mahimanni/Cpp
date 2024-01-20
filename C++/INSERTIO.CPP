#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char s[20],x,s1[20];
 int n,i,c=0;
 clrscr();
 cout<<"Enter the string:\n";
 gets(s);
 cout<<"Enter the position at which you want to insert element:\n";
 cin>>n;
 cout<<"Enter character to be inserted\n";
 cin>>x;

 for(i=0;i<strlen(s);i++)
 {
  if(c==0)
  s1[i]=s[i];

  if(i==n-1)
  {
  s1[i]=x;
  s1[i+1]=s[i];
  c++;
  }

  if(c>0)
  s1[i+1]=s[i];
 }
  s1[i+1]=NULL;

 for(i=0;s1[i]!=NULL;i++)
 {
  cout<<s1[i];
 }
 getch();
}



























