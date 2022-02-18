#include<iostream>
using namespace std;
class A{
private:
	int i=10;
public:
	A(){
cout<<"inside constructor"<<endl;
}
A(A &obj)
{
cout<< "inside copy constructor";
}
void add(A obj)
{
cout<<"inside add func";
}

};
int main()
{
A obj1;
//A obj2=obj1;
obj1.add(obj1);
return 0;
}

