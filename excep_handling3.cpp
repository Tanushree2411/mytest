#include<iostream>
using namespace std;
int main()
{
int a=1;
	try{
	if(a==1)
	throw a;
	else if(a==2)
	throw 'A';

	else if(a==3)
	throw 4.5;
	}

	catch(char s)
	{
	  cout<<"A called"<<endl;
	}
	catch(int s)
	{
	cout<<"int called";
	}
	catch(double s)
		{
		cout<<"flaot called";
		}

}

