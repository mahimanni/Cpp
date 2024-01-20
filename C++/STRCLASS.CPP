#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void get();
void put();
struct student
{
 char name[50];
 int n;
 int m1,m2,m3;
};
class result
{
  struct student stu;
  int t;
  public:

  void get()
  {
   cout<<"Enter the name of the student\n";
   gets(stu.name);
   cout<<"Enter the roll number\n";
   cin>>stu.n;
   cout<<"enter the marks of the student\n";
   cin>>stu.m1>>stu.m2>>stu.m3;
  }
  void put()
  {
   t=stu.m1+stu.m2+stu.m3;
   cout<<"Name of student is:"<<endl;
   puts(stu.name);
   cout<<"Roll no of student is:"<<stu.n<<endl;
   cout<<"Marks of student is:"<<stu.m1<<" , "<<stu.m2<<" , "<<stu.m3<<" , "<<endl;
   cout<<"Total marks:"<<t<<endl;
  }
};
void main()
{
 clrscr();
 result obj;
 obj.get();
 obj.put();
 getch();
}