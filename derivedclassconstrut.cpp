#include<iostream>
using namespace std;
class base
{
int x;
public:
base()
{
cout<<"base constructor called\n";
}
~base()
{
cout<<"base destru called";
}
};
class derived:public base
{
int y;
public:
derived()
{
cout<<"derived default cons called\n";
}
derived(int i)
{
cout<<"paramterized cons called\n";
}
~derived()
{
cout<<"destructor called for derived";
}
};
int main()
{
base b;
derived d1;
derived d2(10);
}
