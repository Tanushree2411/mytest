#include<iostream>
using namespace std;
class abc
{
public:
void display()
{
cout<<"this is parent class";
}
};
class xyz:public abc
{
public:
void display() //overides display of class abc
{
cout<<"child class";
}
};
int main()
{
xyz x;
x.display();//method of class xyz invookes insted of abc
x.abc::display();
}
