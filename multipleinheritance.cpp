#include<iostream>
#include<conio.h>
using namespace std;

class father
{
    char name[20];
    int age;
    public:
    void get();
    void show();
};

void father::get()
{
    cout<<"enter the name of the father ";
    cin>>name;
    cout<<"enter the age of father";
    cin>>age;
}

void father::show()
{
    cout<<"name of the father:"<<name<<endl;
    cout<<"age of father:"<<age<<endl;
}

class mother
{
    int age;
    char name[20];
    public:
    void get();
    void show();
};

void mother::get()
{
    cout<<"enter the name of the mother ";
    cin>>name;
    cout<<"enter the age of the mother ";
    cin>>age;
}

void mother::show()
{
    cout<<"name of the mother:"<<name<<endl;
    cout<<"age of mother "<<age<<endl;
}

class daughter:public  father,public mother
{
    char name[20];
    int age;
    public:
    void get();
    void show();
};

void daughter::get()
{
    father::get();
    mother::get();
    cout<<"enter your name ";
    cin>>name;
    cout<<"enter your age ";
    cin>>age;
}

void daughter::show()
{
    father::show();
    mother::show();
    cout<<"your name is"<<name<<endl;
    cout<<"your age is"<<age<<endl;
}

int main()
{
    father f1;
    mother m1;
    daughter d1;
    d1.get();
    d1.show();
    return 0;
}
