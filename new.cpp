#include<iostream>
using namespace std;
int main()
{
int *p1,*p2,sum;
p1=new int;
p2=new int;

cout<<"enter 1st num";
cin>>*p1;
cout<<"enter 2nd num";
cin>>*p2;
sum=*p1+*p2;
cout<<"sum of pointers are"<<sum;

delete p1;
delete p2;
return 0;
}

