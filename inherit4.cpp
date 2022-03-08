#include<iostream>
using namespace std;

class car
{
public:
int a1;
void talk()
{
cout<<"talking\n";
}

void walk()
{
cout<<"walking\n";
}

void work()
{
cout<<"working\n";
}

};

class fuelcar:public car
{
public:
int b1;
void doctor1()
{
cout<<"this is a doc class";
//cout<< "a2 is\n "<<a2;
}
};
class electriccar: public car
{
public:
int b2;
void doctor2()
{
cout<<"this is a ortho class\n";

}
};
class hybridcar:public fuelcar, public electriccar
{
void hybrid1()
{
cout<<"this is a hybrid class\n";
}
};

int main()
{
car c;fuelcar f;electriccar e;
hybridcar h;
h.doctor2();
h.doctor1();

return 0;
}
