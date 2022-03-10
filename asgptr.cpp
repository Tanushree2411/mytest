#include<iostream>
using namespace std;
class student
{
int marks;
char name[10];
public:
int rollno;
void getdata()
{
cout<<"enter marks";
cin>>marks;
cout<<"enter rollno";
cin>>rollno;
cout<<"enter name";
cin>>name;
}
void printdata()
{
cout<<"marks" << marks;
cout<<"rollno"<<rollno;
cout<<"name"<<name;
}
};
int main()
{
student s1[3];
student *ptr=s1;
for(int i=0;i<3;i++)
{
ptr->getdata();
ptr++;
}
ptr=s1;
for(int i=0;i<3;i++)
{
ptr->printdata();
ptr++;
}
}


