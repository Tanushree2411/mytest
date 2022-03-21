#include<fstream>
#include<iostream>
using namespace std;
int main()
{
ofstream ofile;
ofile.open("file.txt");
ofile<<"line one in the document"<<endl;
ofile<<"Another line"<<endl;
cout<<"to the terminal"<<endl;
ofile.close();
return 0;
}
