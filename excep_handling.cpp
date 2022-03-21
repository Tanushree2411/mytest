#include<iostream>
using namespace std;
int main()
{
int n1,n2,result;
cout<<"enter 1st num";
cin>>n1;
cout<<"enter 2nd num";
cin>>n2;
try{
if (n2==0)
throw n2;
else
{
result= n1/n2;
cout<<"the result is"<<result;
}
}
catch(int x)
{
cout<<"cant divide by "<<x;
}
cout<<"end of prog";
}

