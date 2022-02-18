#include<iostream>
using namespace std;
class measure{
public:
int h;
int b;
int l;
void set_input(int a,int t,int c){
h=a;
b=t;
l=c;
}
int area(){
return 2*((l*b)+(b*h)+(h*l));
}
int vol(){
return l*b*h;
}

};
int main()
{
measure obj1,obj2;
obj1.set_input(10,2,5);
obj2.set_input(2,3,4);
cout<<"area for obj1 is\n"<<obj1.area();
cout<<"vol for obj1 is \n"<<obj1.vol();
cout<<"area for obj2 is\n"<<obj2.area();
cout<<"vol for obj2 is\n"<<obj2.vol();
return 0;
}

