#include<iostream>
#include<fstream>
using namespace std;
int main()
{
fstream myfile;
myfile.open("file.txt",ios::in);
if(!myfile)
cout<<"file cannt opened";
return 0;
}
/*#include <iostream>
#include<fstream>
using namespace std;
int main()
{
fstream myfile;
myfile.open("ak.sh",ios::in);

if(!myfile)
cout<<"The file not exist";
return 0;
}*/
