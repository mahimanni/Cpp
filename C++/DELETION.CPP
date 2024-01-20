#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char s[20],y,s1[20];
 int m,i,c=0;
 clrscr();
 cout<<"Enter the string:\n";
 gets(s);
 cout<<"Enter the position at which you want to delete element:\n";
 cin>>m;
// cout<<"Enter character to be deleted\n";
// cin>>y;

 for(i=0;i<strlen(s);i++)
 {
  if(c==0)
  s1[i]=s[i];

  if(i==m-1)
  {
  s1[i]=s[i+1];
  c++;
  }

  if(c>0)
  s1[i]=s[i+1];
 }
  s1[i+1]=NULL;

 for(i=0;s1[i]!=NULL;i++)
 {
  cout<<s1[i];
 }
 getch();
}

















