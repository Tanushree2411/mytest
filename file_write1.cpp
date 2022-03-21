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
void display()
{
fstream f;
student s;
f.open("file.dat",ios::in|ios::binary);
f.read((char*)&s,sizeof(s));
cout<<"roll"<<s.roll<<endl<<"name"<<s.name<<endl<<"marks"<<s.marks<<endl;
f.close();

}
};
int main()
{
student s;
s.display();
}

