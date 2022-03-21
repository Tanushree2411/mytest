#include<iostream>
using namespace std;
template <class T,class U>
void swap(T *a,U *b)
{
cout<<"b4 swapping\n"<<endl;
cout<<"a is"<<*a;
cout<<"b is "<<*b;
T temp;
temp=*a;
*a=*b;
*b=temp;
cout<<"after swapping\n"<<endl;
cout<<"a is"<<*a;
cout<<"b is "<<*b;

}

int main()
{
string a="Abc";
string b="Bcd";
swap(&a,&b);
return 0;
}
