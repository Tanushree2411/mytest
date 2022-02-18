#include <iostream>
using namespace std;

void swap(int *first, int *second)
{
    int temp;

    temp = *first;
    *first = *second;
    *second = temp;
}

int main()
{
   int a, b;
     cout<<"Enter the value of a: ";
     cin>>a;
     cout<<"Enter the value of b: ";
     cin>>b;
     cout<<endl<<"Before swapping: ";
     cout<<"a= "<<a<<" and b= "<<b;
    swap(&a, &b);
    cout << "After swap, a = " << a << ", b = " << b << endl;
}
