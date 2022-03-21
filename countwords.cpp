#include<iostream>
#include<fstream>
using namespace std;
int main()
{
fstream fin;
fin.open("file.txt");
int count=0;
char word[30];
if(!fin)
cout<<"file didnt open"<<endl;
else
{
while(!fin.eof())
{
fin>>word;
count++;}
}
cout<<"total words "<<count<<endl;

fin.close();
}


