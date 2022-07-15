#include<iostream>
using namespace std;
int sum(int a,int b,int c=0,int d=0)
{
return (a+b+c+d);
}
int main()
{
cout<<"the sum"<<sum(5,4)<<"\n";
cout<<"the sum"<<sum(5,4,5)<<"\n";
cout<<"the sum"<<sum(5,4,5,6)<<"\n";
return 0;
}

