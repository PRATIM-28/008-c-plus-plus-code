#include<iostream>
using namespace std;
int main()
{
int n,f=1;
cout<<"enter a number";
cin>>n;
for(int i=1;i<=n;i++)
{
f=f*i;
}
cout<<"the factorial of "<<n<<"is "<<f;
return 0;
}