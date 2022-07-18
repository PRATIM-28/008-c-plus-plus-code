//find the no of times each element is present
#include<iostream>
using namespace std;
int main()
{
    int n,c=0,k,p=0;
    cout<<"enter the no of elements in the array";
    cin>>n;
    int a[n],b[n];
    cout<<"Enter the elements of the array";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<" The elements of the array are";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    for(int j=0;j<n;j++)
    {
        for( k=0;k<n;k++)
        {
            if(a[j]==a[k])
            {
                c++;
            }
            
        }
        cout<<"the "<<a[j]<<" element is present "<<c<<" no of times"<<"\n";
        c=0;
    }

}