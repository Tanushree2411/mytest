#include<iostream>
using namespace std;
class space {
int x,y,z;
public:
space(){
x=y=z=0;}
space(int a, int b,int c){
x=a;y=b; z=c;}
void display(){
cout<<"\nx="<<x<<"y"<<y<<"z="<<z;
}
void operator--();
void operator--(int);
};

void space::operator--(){
x=--x;
y=--y;
z=--z;
cout<<"pre dec";
}

void space::operator--(int){
x=x--;
y=y--;
z=z--;
cout<<"post dec";
}

int main()
{
space s1(5,4,3);
s1.display();
--s1;
s1.display();
s1--;
s1.display();
return 0;
}
