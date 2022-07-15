#include<iostream>
using namespace std;
int fact(int b);
int main()
{
int a;
cout<<"enter a no";
cin>>a;
fact(a);
return 0;
}
int fact(int b)
{
int num=1;
for(int i=1;i<=b;i++)
{
num=num*i;
}
cout<<"the factorial of the no is"<<num;
return 0;
}