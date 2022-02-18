#include<iostream>
using namespace std;

class calc{
public:
int input1;
int input2;
void set_input(int a,int b){
input1=a;
input2=b;
}
calc add(calc obj1,calc obj2){
return obj1.input1 + obj2.input1;}

};


int main()
{
calc obj1,obj2;
obj1.set_input(10,2);
obj2.set_input(3,4);
calc obj3;
obj3=obj1.add(obj1,obj2);
//cout<<"inputs are"<<obj1.input1<<" "<<obj1.input2<<endl;
cout<<"sum "<<obj1.add(obj1,obj2);
}
