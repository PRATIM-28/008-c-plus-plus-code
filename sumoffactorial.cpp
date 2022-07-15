#include<iostream>
using namespace std;
int main()
{
int n,s=0;
cout<<"enter the number of terms you eant the series";
cin>>n;
for(int i=1;i<=n;i++)
{
	int m=1;
for(int j=1;j<=i;j++)
{
m=m*j;
}
s=s+m;
}
cout<<"the result of the series is"<<s;
return 0;
}
