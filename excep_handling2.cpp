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
if(n2!=n1)
{
float div=(float)n1/n2;
if(div<0)
throw 'e';
cout<<"n1/n2="<<div;
}
else
throw n2;
}
catch(int e)
{
  cout<<"error"<<endl;
}
}

