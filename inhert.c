

#include<iostream>
using namespace std;

class A
{
public:

void displayA()
{
cout<<"display A\n";
}


};
class B
{
public:

void displayB()
{
cout<<"display B\n";
}


};


class C: public A
{
public:

void displayC()
{
cout<<"Display C\n";

}
};

class D: public B
{
public:

void displayD()
{
cout<<"Display D\n";

}
};
class E: public C,public D
{
public:

void displayE()
{
cout<<"Display E\n";

}
};

class F: public E
{
public:

void displayE()
{
cout<<"Display E\n";

}
};






int main()
{
A a;
B b;
C c;
D d;
E e;
F f;
a.displayA();
b.displayA();
b.displayC();
b.displayD();
f.displayA();
f.displayC();
f.displayB();
f.displayE();
e.displayA();
e.displayB();
e.displayC();

return 0;
}
