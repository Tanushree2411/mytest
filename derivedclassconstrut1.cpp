#include<iostream>
using namespace std;
class base1
{
protected:
int i;
public:
base1(int x)
{
i=x;
cout<<"base1 constructor called\n";
}
~base1()
{
cout<<"base destru called";
}
};
class base2
{
protected:
int k;
public:
base2(int x)
{
k=x;
cout<<"constructing base2";}
~base2()
{
cout<<"destructing base2";}
};
class derived:public base1,public base2
{
int j;
public:
derived(int x,int y,int z):base1(y),base2(z)
{
j=x;
cout<<"derived default cons called\n";
}

~derived()
{
cout<<"destructor called for derived";
}
void show()
{
cout<<i<<" "<<j<<" "<<k;
}
};
int main()
{

derived d2(3,4,5);
d2.show();
return 0;
}
