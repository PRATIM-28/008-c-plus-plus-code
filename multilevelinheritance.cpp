#include<iostream>
#include<conio.h>
using namespace std;

class worker
{
    char name[20];
    int age;
    public:
    void get();
    void show();
};

void worker::get()
{
    cout<<"please enter your name ";
    cin>>name;
    cout<<"enter your age";
    cin>>age;
}

void worker::show()
{
    cout<<"name:-"<<name<<endl;
    cout<<"age:-"<<age<<endl;
}

class manager:public worker
{
     int now;
     public:
     void get();
     void show();
};

void manager::get()
{
    worker::get();
    cout<<"enter the number of worker working under you";
    cin>>now;
}

void manager::show()
{
    worker::show();
    cout<<"the number of workers working under is:-"<<now<<endl;
}

class ceo:public manager
{
    int mow;
    public:
    void get();
    void show();
};

void ceo::get()
{
    manager::get();
    cout<<"enter the number of manager under you";
    cin>>mow;
}

void ceo::show()
{
    manager::show();
    cout<<"the no of managers working under is"<<mow;
}

int main()
{
    ceo c1;
    c1.get();
    c1.show();
    return 0;
}