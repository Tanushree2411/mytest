#include<iostream>
#include<fstream>
using namespace std;
int main()
{
ifstream input;
string str;
input.open(".txt");
if(!input)
cout<<"file did not exis";
else
{
while(!input.eof())
{
input>>str;
cout<<str<< "";
}
}
}


