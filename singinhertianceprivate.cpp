#include<iostream>
#include<conio.h>
using namespace std;

class worker
{
    int age;
    char name[20];
    public:
    void get();
    void show();
};

void worker:: get()
{
    cout<<"enter the name please:"<<endl;
    cin>>name;
    cout<<"enter your age"<<endl;
    cin>>age;
}

void worker::show()
{
    cout<<"name:-"<<name<<endl;
    cout<<"age:-"<<age<<endl;
}

class manager:worker
{
    int now;
    public:
    void get();
    void show();
};

void manager::get()
{
   worker::get();
    cout<<"enter the number of employees working under you now";
    cin>>now;
}

void manager::show()
{
   worker::show();
    cout<<"the no employees working under is:-"<<now<<endl;
}

int main()
{
    worker w1;
    manager m1;
    m1.get();
    m1.show();
    return 0;
}