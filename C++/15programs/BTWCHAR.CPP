#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
class characters
{
 char ch1,ch2,a[26];
 public:
 void get()
 {
 cout<<"Enter two characters:\n";
 cin>>ch1>>ch2;
 }
 void between()
 {
  int i,j=0;
  for(i=ch1+1;i<ch2;i++)
  {
   a[j]=i;
   j++;
  }
  put(a,j);
 }
 void put(char b[],int l)
 {
  int k;
  cout<<"Characters between the given characters are:\n";
  for(k=0;k<l;k++)
  {
   cout<<a[k]<<" ";
  }
 }
};

void main()
{
 characters obj;
 clrscr();
 obj.get();
 obj.between();
 getch();
}










