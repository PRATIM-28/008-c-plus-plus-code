#include<iostream>
#include<conio.h>
using namespace std;

class worker
{
    int age;
    char name[20];
    public:
    void get(int);
    void show(int);
};

void worker:: get(int a)
{
    cout<<"enter the name of "<<(a+1)<<" employee please:"<<endl;
    cin>>name;
    cout<<"enter the age of "<<(a+1)<<" employee"<<endl;
    cin>>age;
}

void worker::show(int b)
{
    cout<<"name of "<<(b+1)<<" employee:-"<<name<<endl;
    cout<<"age of "<<(b+1)<<" employee:-"<<age<<endl;
}

class manager:public worker
{
    int now;
    public:
    void get(int);
    void show(int);
};

void manager::get(int c)
{
   worker::get(c);
    cout<<"enter the number of employees working under "<<(c+1)<<" now";
    cin>>now;
}

void manager::show(int d)
{
   worker::show(d);
    cout<<" the number of employees working under "<<(d+1)<<" now:-"<< now<<endl;
}

int main()
{
    int n;
    cout<<"enter the number of employees whose data you have to store:";
    cin>>n;
    worker w[n];
    manager m[n];
    cout<<"enter the details"<<endl;
    for(int i=0;i<n;i++)
    {
        m[i].get(i);
    }
    cout<<"the details are"<<endl;
    for(int i=0;i<n;i++)
    {
        m[i].show(i);
    }
    
    return 0;
}