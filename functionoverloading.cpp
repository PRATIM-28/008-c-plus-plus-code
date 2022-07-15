//area of a triangle,circle and rectangle using function overloading
#include<iostream>
int area(float b,float h)
{
float ar;
ar=0.5*b*h;
cout<<"area of the given right angled triangle is "<<ar<<"/n";
return 0;
}
int area(float r)
{
float ar;
float pi=3.14;
ar=3.14*r*r;
cout<<"the area of the circle is",ar;
return 0;
}
int ar(int l,int br)
{
float ar;
ar=br*l;
cout<<"the area of the rectangle is",ar;
return 0;
}
int main()
{ 
float p,q,r,f,g;
int s,t;
cout<<"enter the length and breadth of a triangle: ";
cin>>p>>q;
area(p,q);
cout<<"enter the radius of the circle ";
cin>>r;
area(r);
cout<<"enter the base and height of the triangle ";
cin>>s>>t;
area(s,t);
return 0;
}

