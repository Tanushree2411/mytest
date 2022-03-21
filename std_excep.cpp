#include<iostream>
using namespace std;
#include<exception>
int main()
{
try
{
int *myarray = new int [10000000000];
}
catch(exception &e)
{
cout<<"std excep"<<e.what()<<endl;
}
return 0;
}
