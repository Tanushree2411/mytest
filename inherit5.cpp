#include<iostream>
using namespace std;
class base
{
int i,j;
public:
void set(int a,int b)
{
i=a;
j=b;
}
void show()
{
cout<<i<<" "<<j;
}
};
class derived :private base//private base callled so eror if publicly called then will be no error
{
int k;
public:
derived (int x)
{
k=x;
}
void showk()
{
cout<<k;
}
};
int main()
{
derived ob(3);
ob.set(1,2);
ob.show();
return 0;
}
