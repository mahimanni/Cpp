#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
void empty(char [],int);
void main()
{
  char s[100],r[100];
  int c,i,j=0,sizer;
  clrscr();
  cout<<"Enter String:\n";
  gets(s);

  c=strlen(s);
  s[c]=' ';
  c++;
  for(i=0;i<c;i++)
  {
   if(s[i]==' ')
   {
   cout<<"String is:\n"<<r<<endl;
   sizer=strlen(r);
   empty(r,sizer);
   sizer=100;
   }
   else
   {
     r[j]=s[i];
     j++;
   }
  }
  getch();
}
void empty(char a[],int size)
{
 size=0;
/* int x;
 for(x=0;x<size;x++)
 {
  a[x]=' ';
 } */
}









