#include<iostream>
using namespace std;

template <class T>
class addi{
public:
T add(T n1,T n2){
T res;
res=n1+n2;
return res;
}

};
int main()
{
addi<int> ob1;
addi<long> ob2;

int a=10,b=20,c;
long A=11,B=22,C;
c=ob1.add(a,b);
C=ob1.add(A,B);
cout<<"sum of int:"<<c;
cout<<"sum of long int:"<<C;
return 0;
}

