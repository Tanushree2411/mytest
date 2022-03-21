#include<iostream>
using namespace std;
int main()
{
int a=1;
try
{
try
{
throw a;
}
catch(int x)
{
cout<<"exception in inner try catch block";
throw x;
}
}
catch(int x)
{
cout<<"exception in inner try catch block";
throw x;
}
}
