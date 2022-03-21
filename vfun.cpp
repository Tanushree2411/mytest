#include<iostream>
using namespace std;
class base
{
public:
virtual void display()
{
cout<<"this is parent class\n";
}
};
class derived1:public base
{
public:
void display() //overides display of class base
{
cout<<"child1 class\n";
}
};
class derived2:public base
{
public:
void display1() //overides display of class 
{
cout<<"child2 class";
}
};
int main()
{
derived1 dv1;
derived2 dv2;
base* ptr;
ptr=&dv1;
ptr->display();
ptr=&dv2;
ptr->display();
return 0;
}
