#include<iostream.h>
#include<conio.h>
static int r=0;
void Palin(int n)
{
int a;
if(n>0)
{
a=n%10;
r=(r*10)+a;
Palin(n/10);
}
else
{
if(n==r)
cout<<"Palin";
else
{
cout<<n<<r;
cout<<"No";}
}
}
void main()
{
clrscr();
Palin(121);
getch();
}
