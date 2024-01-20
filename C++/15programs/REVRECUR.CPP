#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>

void reverse(char b[],int i)
{
   int n;
   char t;
  n=strlen(b);
 if(i>=n/2)
 {
  cout<<"Reversed String is:"<<b;
 }
 else
 {
  t=b[i];
  b[i]=b[n-1-i];
  b[n-1-i]=t;
  i=i+1;
 reverse(b,i);
 }
}
void main()
{
 char str[100];
 cout<<"Enter string:\n";
 gets(str);
 reverse(str,0);

 getch();
}














