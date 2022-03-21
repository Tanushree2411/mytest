#include<iostream>
using namespace std;
class base
{
public:
int b;
void display()
{
cout<<"b"<<b;
}
};
class derived:public base
{
public:
int c;
void display() //overides display of class abc
{
cout<<"c is"<<c;
}
};
int main()
{
base b1;
derived d1;
base *bptr;
bptr=&b1;
cout<<"\nbase class pointer assign address of base class object\n";
bptr->b=100;
bptr->display();
bptr=&d1;
bptr->b=200;
cout<<"\nbase class pointer assign address of derived class object\n";
bptr->display();
derived *dptr;
dptr=&d1;
cout<<"\nderived class pointer assign address of derived class object\n";
dptr->c=300;
dptr->display();

}

