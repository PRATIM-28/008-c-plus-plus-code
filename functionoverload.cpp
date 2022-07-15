#include<iostream>
using namespace std;
int sum(int x,int y);
double sum(double o,double p);
int main()
{
int a,b;
double c,d;
cout<<"enter two numbers";
cin>>a>>b;
c=a;
d=b;
sum(a,b);
sum(c,d);
return 0;
}
int sum(int x,int y)
{
int z;
z=x+y;
cout<<"sum="<<z;
return 0;
}
double sum(double o,double p)
{
double d;
d=o-p;
cout<<"the sum="<<d;
return 0;
}
