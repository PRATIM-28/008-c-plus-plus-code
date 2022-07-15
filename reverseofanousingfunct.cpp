#include<iostream>
using namespace std;
int reverse(int a);
int main()
{
int n;
cout<<"enter a number";
cin>>n;
reverse(n);
}
int reverse(int a)
{
int rem,rev=0,c=a;
while(c!=0)
{
rem=a%10;
rev=rev*10+rem;
c=c/10;
}
cout<<"the reverse of the no "<<a<<" is"<<rev;
return 0;
}