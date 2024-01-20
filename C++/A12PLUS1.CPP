#include<iostream.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

void main()
{
 char s[50],p[10],q,r[10];
 int i,j,x[10],y[10],z[10],c,k=0,l=0;
 clrscr();
 cout<<"Enter expression to be evaluated";
 gets(s);

 for(i=0;i<strlen(s);i++)
 {
  if(s[i]!=' ')
  {
   p[l]=s[i];
   l++;
  }
  else if(s[i]==' ')
  {
   q=s[i+1];
  }
  else
  {
  for(j=i+3;j<strlen(s);j++)
  {
   r[k]=s[j];
   k++;
  }
  }
 }

 x=(int)p;
 y=(int)q;
 z=(int)r;

 if(y==42)
 c=x*z;
 else if(y==43)
 c=x+z;
 else if(y==45)
 c=x-z;
 else if(y==47)
 c=x/z;
 else
 cout<<"Please enter correct operator";

 cout<<"Answer is:"<<c;
 getch();
}