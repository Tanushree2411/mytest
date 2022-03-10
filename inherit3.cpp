
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

class doctor
{
public:
int b1;
void doctor1()
{
cout<<"this is a doc class";
//cout<< "a2 is\n "<<a2;
}
};
class ortho: public doctor, public person
{
public:
int b2;
void doctor2()
{
cout<<"this is a ortho class\n";

}
};

int main()
{
person p1;
doctor d1;
ortho o1;
//d1.talk();
//d1.walk();
//d1.work();
//d1.doctor1();
o1.doctor2();
o1.doctor1();
o1.talk();
return 0;
}
