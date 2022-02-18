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
int add();

};
int calc :: add(){
return input1+input2;
}

int main()
{
calc obj1;
int x;
obj1.set_input(10,2);
cout<<"inputs are"<<obj1.input1<<" "<<obj1.input2<<endl;
cout<<"sum "<<obj1.add();
}
