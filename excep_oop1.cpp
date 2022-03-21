#include<iostream>
using namespace std;
class test{
int x;
public:
void read()
{
cout<<"enter a num";
cin>>x;
}
class even{};
class odd{};
void check()
{
if(x%2==0)
throw even();
else
throw odd();
}
};

int main()
{
test t;
t.read();
try{
t.check();
}
catch(test::even)
{
cout<<"number is even";
}
catch(test::odd)
{
cout<<"number is odd";
}
return 0;
}
/*#include<iostream>
using namespace std;

class test

{
int x;
public:
void read()
{
cout<<"enter a number:==";
cin>>x;
}

class even{};
class odd{};
void check()
{
if(x%2==0)
{
throw even();
}
else
{
throw odd();
}
}
};
int main()
{
test t;

t.read();
try{
t.check();
}

catch(test :: even)
{
cout<<"\nnum is even..\n";
}

catch(test :: odd)
{
cout<<"\nnum is odd..\n";
}

return 0;
}*/
