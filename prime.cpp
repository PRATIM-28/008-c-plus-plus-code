#include<iostream>
using namespace std;
int main()
{
int n,c=0;
cout<<"enter a number";
cin>>n;
for(int i=1;i<=n;i++)
{
if(n%i==0)
{
c++;
}
}
if(c<=2)
{ 
cout<<"the given number "<<n<<" is a prime number";
}
if(c>2)
{
cout<<"the given number "<<n<<" is not a prime number";
}
return 0;
}
