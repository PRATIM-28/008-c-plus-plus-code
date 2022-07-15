#include<iostream>
using namespace std;
int inline add(int a,int b);
int main()
{
int c,d;
cout<<"enter two nos:";
cin>>c>>d;
add(c,d);
return 0;
}
int inline add(int a,int b)
{
int s;
s=a+b;
cout<<"sum="<<s;
return 0;
}
