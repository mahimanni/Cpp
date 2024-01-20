#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char str[100],*ptr;
 cout<<"Enter String\n";
 gets(str);

 ptr=strtok(str," ");
 while(ptr!=NULL)
 {
  cout<<ptr<<endl;
  ptr=strtok(NULL," ");
 }
 getch();
}











