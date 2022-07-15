#include<iostream>
using namespace std;
int reverse(int a ,int b);
int main()
{
int c,d,o;
cout<<"enter two nos to swap";
cin>>c>>d;
cout<<"before swapping a="<<c<<"b="<<d<<"\n";
cout<<"press 1 to swap";
cin>>o;
if(o==1)
{
reverse(c,d);
}
else
{
cout<<"thank u for visiting";
}
return 0;
}
int reverse(int a,int b)
{
int temp;
temp=a;
a=b;
b=temp;
cout<<"after swapping a="<<a<<"b="<<b;
return 0;
}