#include <iostream>

using namespace std;

 class student
{
    public:
    int regdno;
    char a[100];
    int roll;
};
int main()
{
    student one[5];
	for(int i=0;i<5;i++)
	{
    cout<<"enter the name of the "<<(i+1)<<" student"<<"\n";
    cin>>one[i].a;
    cout<<"enter the roll no of the "<<(i+1)<<" student"<<"\n";
    cin>>one[i].roll;
    cout<<"enter the registration no of the "<<(i+1)<<" student"<<"\n";
    cin>>one[i].regdno;
	}
	for(int i=0;i<5;i++)
	{
	    cout<<"for student no"<<(i+1)<<"\n";
    cout<<"regd no is= "<<one[i].regdno<<"\n";
    cout<<"name of the student= "<<one[i].a<<"\n";
    cout<<"roll no= "<<one[i].roll;
    cout<<"\n";
}
  return 0;
}