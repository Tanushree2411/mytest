#include<iostream>
using namespace std;
class shape //abstract class
{
protected:
float x;
public:
void getdata()
{
cin>>x;
}
virtual float calculatedarea()=0;
};
class square:public shape
{
public:
float calculatedarea()
{
return x*x;}
};
int main()
{
square s1;
shape* ptr;
ptr=&s1;
ptr->getdata();
cout<< ptr->calculatedarea();
}

