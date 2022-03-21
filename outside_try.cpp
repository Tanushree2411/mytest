#include<iostream>
using namespace std;
void xtest(int test)
{
cout<<"inside xtest,test is"<<test;
if(test)
throw test;
}

int main()
{
cout<<"start\n";
try{
cout<<"Inside try block\n";
xtest(0);
xtest(1);
xtest(2);
}
catch(int i){
cout<<"caught an exception==value is\n";
cout<<i<<"\n";
}
cout<<"end";
return 0;
}
