#include <iostream>
#include<ctime>
#include<cmath>
using namespace std;
class distance1
{
int feet,inch;
	public:
	distance1(int a,int b){
	feet=a;
	inch=b;
	cout<<"a"<<a<<"b"<<b;
	}
	~distance1()
	{
	cout<<"\ndistructor called\n";
	}
};

int main()
{
distance1 d1(5,10);
return 0;
}

