#include<iostream>
using namespace std;
class ppk
{
    int data;
    public:
    ppk(int r)
    {
        data=r;
        cout<<"the value of data"<<data<<"\n";
    }
    ppk(ppk &copys)
    {
        data=copys.data;
        cout<<"the value of data"<<data;
    }
};
int main()
{
    ppk copy1(10); 
    ppk copy2(copy1);
    ppk copy3(copy2);


    

    return 0;
}