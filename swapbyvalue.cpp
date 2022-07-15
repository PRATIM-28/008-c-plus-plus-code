#include<iostream>
using namespace std;
void swap(int,int);
int main()
{
int a,b;
cout<<"enter two numbers to swap";
cin>>a>>b;
cout<<"before swapping the values of two variables="<<a<<b;
swap(a,b);
return 0;
}
void swap(int x,int y)
{
int z;
z=x;
x=y;
y=z;
cout<<"after swapping the values of two variables="<<x<<y;
}