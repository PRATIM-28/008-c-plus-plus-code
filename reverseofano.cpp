#include<iostream>
using namespace std;
int main()
{
int rem,rev=0,n
cout<<"enter a number";
cin>>n;
while(n!=0)
{
rem=n%10;
rev=rev*10+rem;
n=n/10;
}
cout<<"the reverse of the number is"<<rev;
return 0;
}
