#include<iostream>
#include<fstream>
using namespace std;
int main()
{
ifstream input;
string str;
input.open("file.txt");
if(!input)
cout<<"file did not exis";
else
{
while(getline(input,str))
{
cout<<str<<endl;
}
}
}


