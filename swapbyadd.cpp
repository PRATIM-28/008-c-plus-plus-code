#include<iostream>
using namespace std;
int reverse(int *w,int *t);
int main()
{
int c,d,o;
int *p,*q;
cout<<"enter two nos to swap";
cin>>c>>d;
p=&c;
q=&d;
cout<<"before swapping a="<<c<<"b="<<d<<"\n";
cout<<"press 1 to swap";
cin>>o;
if(o==1)
{
reverse(p,q);
}
else
{
cout<<"thank u for visiting";
}
return 0;
}
int reverse(int *w,int *t)
{
int temp;
temp=*w;
*w=*t;
*t=temp;
cout<<"after swapping a="<<*w<<"b="<<*t;
return 0;
}