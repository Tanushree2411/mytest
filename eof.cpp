#include<iostream>
#include<fstream>
using namespace std;
int main()
{
fstream input;
string str,str2;
input.open("file.txt");
if(!input)
cout<<"file did not exis";
else
{
while(!input.eof())
{
input>>str>>str2;
cout<<str<<'\t'<<str2<<endl;
}
}
}


