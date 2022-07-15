#include<iostream>
using namespace std;
int main()
{
int n1,n2,c=0,j=0,g;
int a[10];
cout<<"enter two numbers";
cin>>n1>>n2;
for(int i=1;i<=n1;i++)
{
	if(n1%i==0&&n2%i==0)
	{
		a[j]=i;
		c++;
		j++;
	}
}
g=a[0];
for(int i=0;i<c;i++)
{
	if(a[i]>g)
	{
		g=a[i];
	}
}
cout<<"the GCD IS"<<g;
return 0;
}

