#include<iostream>
using namespace std;

class person
{
public:
int a1;
void talk()
{
cout<<"talkinh\n";
}
protected:
int a2=10;
void walk()
{
cout<<"walking\n";
}
private:
int a3;
void work()
{
cout<<"working\n";
}

};

class doctor: protected person
{
public:
int b1;
void doctor1()
{
cout<<"this is a doc class";
cout<< "a2 is "<<a2;
}
};


int main()
{
person p1;
doctor d1;
//d1.talk();
//d1.walk();
//d1.work();
d1.doctor1();
return 0;
}
