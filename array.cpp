#include<iostream>
using namespace std;
int main()
{
int n,f,c=0;
cout<<"enter the no of elements you want inside an array";
cin>>n;
int a[i];
cout<<"enter the elements inside the array \n";
for(int i=0;i<n;i++)
{
cin>>a[i];
}
cout<<"enter the number to find the number of times it appears in the array";
cin>>f;
for(int i=0;i<n;i++)
{
if(a[i]==f)
c++;
}
cout<<"the number of times the element "<<f<<" appears in the array is "<<c;
}