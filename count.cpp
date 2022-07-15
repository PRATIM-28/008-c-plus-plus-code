#include<iostream>
class item
{
static int count;\\count is static int member;
public;
void getdata()
{
count++;
}
void get count(void)
{
cout<<"count:";
}
};
int item::count;
int main()
{
item t1,t2,t3;
t1.get_count();
t2.get_count();
t3.get_count();
t1.getdata();
t2.getdata();
t3.getdata();
cout<<"after reading data:";
t1.get_count();
t2.get_count();
t3.get_count();
return 0
} 