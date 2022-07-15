#include<iostream>
using namespace std;
class room
{
    public:
    float l,b,h;
    float area;
    float volume;

float rarea()
{
    area=l*b;
    cout<<"area of the room="<<area;
    cout<<"\n";
    return 0;
}
float rvolume()
{
    volume=l*b*h;
    cout<<"volume of the room="<<volume;
    return 0;
}
};
int main()
{
    room r1;
    cout<<"enter the length breadth and height of the room  ";
    cin>>r1.l>>r1.b>>r1.h;
    cout<<r1.rarea()<<"\n";
    cout<<r1.rvolume();
    return 0;
}