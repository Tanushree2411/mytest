#include<iostream> ///example of ambiguity //a is base of 2 classes so ambiguity observed that where to access

using namespace std;
class A
{
public:
int i;
};

class B: public A
{
public :
int j;
};
class C: public A
{
public:
int k;
};
class D:public B,public C
{
public:
int sum;
};
int main()
{
D obj1;
obj1.i=10;
obj1.j=20;
obj1.k=30;
obj1.sum=obj1.i + obj1.j + obj1.k;
cout<<obj1.sum;
}
