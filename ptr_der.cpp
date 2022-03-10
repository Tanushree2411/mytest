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
void display()
{
cout<<"base";
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
void display1()
{
cout<<"derived";
}
};
int main()
{
base *ptr;
base b;
derived d2(10);
ptr=&b;
ptr=&d2;
ptr->display();
ptr->display1();//error
((derived *)ptr)->display();
}
