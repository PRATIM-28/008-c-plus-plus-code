#include<iostream>
using namespace std;
class emplo
{
public;
int age,sal;
string name;
void getdata();
void printdata();
};
int getdata()
{
cout<<"enter the name of the employee";
cin>>name;
cout<<"enter the name of the salary";
cin>>age;
cout<<"enter the salary of the employee";
cin>>sal;
}
void emplo:: printdata()
{
cout<<"the name of the employee is"<<name;
cout<<"the age of the employee is"<<age;
cout<<"the salary of the employee is"<<sal;
}
return 0;
}
int main()
{
cout<<"enter the number of office employees";
cin>>n;
emplo a[n];
for(int j=0;i<n;j++)
{
a[i].getdata();
}
for(int j=0;j<n;j++)
{
a[j].printdata();
}
return 0;
}s
