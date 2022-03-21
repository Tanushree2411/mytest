#include<iostream>
#include<fstream>
using namespace std;
class student{
public:
int roll;
char name[25];
float marks;
void getdata()
{
cout<<"enter rollno and name"<<endl;
cin>>roll>>name;
cout<<"marks"<<endl;
cin>>marks;
}
void addrecord()
{
fstream f;
student s;
f.open("file.dat",ios::app|ios::binary);
s.getdata();
f.write((char *)&s,sizeof(s));
f.close();
}
};
int main()
{
student s1;char ch='n';
do
{
s1.addrecord();
cout<<"want add more(y/n)"<<endl;
cin>>ch;
}while(ch=='y'||ch=='Y');
cout<<"updated"<<endl;
}


