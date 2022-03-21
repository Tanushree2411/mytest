#include<iostream>
using namespace std;
void demo()throw(int,double)
{
int a=2;

if(a==1)
throw a;
else if(a==2)
throw 'A';
else if(a==3)
throw 4.5;
}

int main()

{
try{
demo();
}
catch(int s)
{
cout<<"int caled";
}
catch(double s)
{
cout<<"double called";
}
catch(char s)
{
cout<<"char called";
}
}


