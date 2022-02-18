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
int add(){
return input1+input2;
}
int subtract(){
return input1-input2;
}
int multiply(){
return input1*input2;
}

int division(){
return input1/input2;
}

int modulo(){
return input1%input2;
}



};

int main()
{
calc obj1;
int x;
obj1.set_input(10,2);
cout<<"inputs are"<<obj1.input1<<" "<<obj1.input2<<endl;
cout<<"enter 0 for add 1 for sub 2 for mul and 3 for div and 4 for modulo";
cin>>x;
switch(x)
{
case 0:

cout<<"sum "<<obj1.add();
break;
case 1:
cout<<"sub"<<obj1.subtract();
break;
case 2:
cout<<"mul"<<obj1.multiply();
break;
case 3:
cout<<"div"<<obj1.division();
break;
case 4:
cout<<"modulo"<<obj1.modulo();
break;
}
return 0;
}
