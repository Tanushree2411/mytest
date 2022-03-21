#include<iostream>
#include<fstream>
using namespace std;
int main()
{

ofstream outfile;
outfile.open("file.txt");
outfile<<"this is my file";
long pos=outfile.tellp();
outfile.seekp(pos+6);
outfile<<"again my file"<<endl;
outfile.close();
cout<<"done";
return 0;
}
