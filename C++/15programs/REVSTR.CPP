#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
 char str[50],str2[50],temp;
 int i,j,n;
 clrscr();
 cout<<"Enter String:";
 gets(str);

 strcpy(str2,str);
 j=strlen(str)-1;

/* for(i=0;i<j;i++)
 {
  temp=str[i];
  str[i]=str[j];
  str[j]=temp;
  j--;
 }  */

 n=strlen(str);
 for(i=0;i<n/2;i++)
 {
  temp=str[i];
  str[i]=str[n-1-i];
  str[n-1-i]=temp;
 }

 cout<<"\nReversed string is:\n"<<str;
 cout<<"\nReversed string is:\n"<<strrev(str2);
 getch();
}












