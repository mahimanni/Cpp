#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
void count(char []);
void main()
{
 char str[100],*ptr,ch,*a[100];
 int l,r=0,i;
 clrscr();
 cout<<"Enter String:\n";
 gets(str);

 l=strlen(str);
 ch=str[l-1];

 if(ch=='.'||ch=='?'||ch=='!')
 {
 cout<<"Invalid sentence\n";
 }
 else
 {
   ptr=strtok(str," ");
   while(ptr!=NULL)
   {
    a[r]=ptr;
    r++;
    ptr=strtok(NULL," ");
   }
   for(i=0;i<r;i++)
   {
    count(a[i]);
   }
 }
 getch();
}

void count(char b[])
{
    int x=0,y=0,j;
    for(j=0;j<strlen(b);j++)
     {
      if(b[j]=='a'||b[j]=='e'||b[j]=='i'||b[j]=='o'||b[j]=='u')
      x++;
      else
      y++;
     }
   cout<<"No of vowels in "<<b<<" is:"<<x<<"\n";
   cout<<"No of consonants in "<<b<<" is:"<<y<<"\n\n";

}









