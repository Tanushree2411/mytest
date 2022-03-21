#include<iostream>
#include<fstream>

int main()
{
fstream myfile;
myfile.open("file.txt",ios::in);
if(!myfile)
cout<<"file cannt opened");
return 0;
}
