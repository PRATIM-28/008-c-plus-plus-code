#include<iostream>
using namespace std;
int palindrome(int a);
int main()
{
int b;
cout<<"enter the number";
cin>>b;
palindrome(b);
return 0;
}
int palindrome(int a)
{
int rem,rev=0,c=a;
while(c!=0)
{
rem=a%10;
rev=rev*10+rem;
c=c/10;
}
if(rev==a)
{
cout<<"PALINDROME";
}
else
{
cout<<"NOT A PALINDROME";
}
return 0;
}