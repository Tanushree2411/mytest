#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream fin;
	fin.open("file.txt");
	int count=0;
	string line;
	if(!fin)
		cout<<"file didnt open"<<endl;
	else
	{
		while(getline(fin,line))
		{
		fin>>line;
		count++;
		cout << "inside while\n";
		}
	}
	cout<<"total line "<<count<<endl;
	
	fin.close();
}


