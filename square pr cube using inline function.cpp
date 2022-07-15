#include<iostream>
using namespace std;
inline float cube(int s)
{
float cube;
cube=s*s*s;
return cube;
}
inline float square(int n)
{
return n*n;
}
int main()
{
int n,o;
cout<<"enter the no for square or cube";
cin>>n;
cout<<"press 1 for square and 2 for cube"<<"\n";
cin>>o;
switch(o)
{
case 1:
cout<<"the square of the no is  "<<square(n);
break;
case 2:
cout<<"the cube of the no is  "<<cube(n);
break;
default:
cout<<"this is wrong input";
break;
return 0;
}
