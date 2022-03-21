#include<iostream>
using namespace std;
template <class T,class U>
void multiply(T num1,U num2)
{
cout<<"result"<<num1*num2<<endl;
}

int main()
{
int a=10;
int b=20;
float x=2.2,y=2.5;
multiply(a,x);
multiply(b,y);
multiply(a,b);
return 0;
}
 
