#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
void main()
{
int i,a[10],j=0,n,f=0;
clrscr();
   for(i=0; i<10; i++)
   {
      a[i]=rand() % 1000;
      j++;
   }
   for(i=0;i<10;i++)
   cout<<a[i]<<endl;

   cout<<"Enter OTP"<<endl;
   cin>>n;
   for(i=0;i<10;i++)
   {
   if(a[i]==n)
    f=1;
    }
    if(f==1)
    cout<<"OTP matched";

srand(time(NULL));
getch();
}