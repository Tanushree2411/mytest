#include<iostream>
#include<fstream>

using namespace std;

int main()
{
fstream fp;
char buf[100];
int pos;
fp.open("file.txt",ios::out|ios::ate);
cout<<"writing to a file"<<endl;
fp<<"line one"<<endl;
fp<<"line two"<<endl;
pos=fp.tellp();
cout<<"current position"<<pos<<endl;
fp.seekp(-7,ios::cur);
fp<<endl<<"random data";
fp.seekp(7,ios::beg);
cout<<"done";
fp<<"hello world";
fp.close();
cout<<"done writing"<<endl;
fp.open("file.txt");
cout<<"reading the file"<<endl;
fp.seekg(0);
while(fp.getline(buf,100))
{
cout<<buf<<endl;}
pos=fp.tellg();
cout<<"pos pointing is at"<<pos;
return 0;
}
