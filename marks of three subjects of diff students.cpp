#include<iostream>
using namespace std;
class mark
{
int s1,s2,s3;
float avg;
public:
void accept(int e)
{
cout<<"enter the marks of student "<<(e+1)<<" in three subjects";
cin>>s1>>s2>>s3;
}
void print(int d)
{
cout<<"the marks in the three subjects "<<s1<<" "<<s2<<" "<<s3<<"\n";
avg=(s1+s2+s3)/3;
cout<<"the average of the student"<<(d+1)<<"in three subjects is= "<<avg<<"\n";
}
};
int main()
{
int n;
cout<<"enter the no of students";
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
mark a[i];
a[i].accept(i);
a[i].print(i);
}
}
