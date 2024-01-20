#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<stdlib.h>
#include<string.h>

void main()
{
 char s[20];
 int i,c=0;
 clrscr();
 cout<<"Enter the string\n";
 gets(s);

 for(i=0;i<strlen(s)-1;i++)
 {
 if(s[i]==s[i+1])
 {
 cout<<"Double character found is:\n";
 cout<<s[i]<<endl;
 c++;
 }
 }
 if(c==0)
 cout<<"No double character found";
 getch();
}