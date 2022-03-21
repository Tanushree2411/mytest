/*#include<iostream>
#include<fstream>
using namespace std;
int main()
fstream fin,fout;
fin.open("file.txt");
fout.open("file1.txt");
char ch;
while(!fin.eof())
{
fin.get(ch);
fout<<ch;
}
cout<<"copy done";
fin.close();
fout.close();
return 0;
}*/

#include<iostream>
#include<fstream>
using namespace std;
int main(){
fstream fin,fout;
fin.open("file.txt");
fout.open("file1.txt");
char ch;
int count=0;
char word[30];
while(!fin.eof()){
fin.get(ch);;
fout<<ch;}



cout<<"copy done"<<endl;
fin.close();
fout.close();
}
