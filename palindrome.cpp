#include<iostream>
using namespace std;
int main()
{
int rem,rev=0,n,a;
cout<<"enter a number";
cin>>n;
a=n;
while(n!=0)
{
rem=n%10;
rev=rev*10+rem;
n=n/10;
}
cout<<"the reverse of the number is"<<rev<<"\n";
if(a==rev)
{
cout<<"yes "<<a<<" is PALINDROME";
}
else
{
cout<<"no "<<a<<" is NOT PALINDROME";
}
return 0;
}
