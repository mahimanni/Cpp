#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char s[20],a[20],x;
 int n,i,pos,pos1;
 clrscr();
 cout<<"Enter the string:\n";
 gets(s);
 cout<<"Enter the position at which you want to insert element:\n";
 cin>>pos;
 cout<<"Enter character to be inserted\n";
 cin>>x;

 n=strlen(s);
 for(i=n-1;i>=pos-1;i--)
 {
   s[i+1]=s[i];
 }
 n=n+1;
 s[pos-1]=x;

 cout<<"After insertion:\n";
 for(i=0;i<n;i++)
 cout<<s[i];

 cout<<"\nEnter string:\n";
 gets(a);
 cout<<"Enter position:\n";
 cin>>pos1;

 n=strlen(a);
 for(i=pos1-1;i<n-1;i++)
 {
  a[i]=a[i+1];
 }
 cout<<"After deletion:\n";

 for(i=0;i<n-1;i++)
 {
  cout<<a[i];
 }

 getch();
}



























