#include<iostream>
using namespace std;

class convert
{
protected:
double v1;
double v2;
public:
convert(double i)
{
v1=i;
}
double getconv()
{
return v2;}
double getinit()
{
return v1;}
virtual void compute()=0;
};
class l_to_g:public convert{
public:
l_to_g(double i): convert(i)
{}
void compute()
{
v2=v1/3.7854;
}
};
class f_to_c:public convert
{
public:
f_to_c(double i):convert(i) {}
void compute()
{
v2=(v1-32)/1.8;
}
};
int main()
{ 
convert *p;
l_to_g lgob(4);
f_to_c fcob(70);
//use virtual fun mechanism to convert
p=&lgob;
cout<<p->getinit()<<"liters is\n";
p->compute();
cout<<p->getconv()<<"gallons\n";
p=&fcob;
cout<<p->getinit()<<"in farenheit is\n ";
p->compute();
cout<<p->getconv()<<"celsious\n";
return 0;
}
