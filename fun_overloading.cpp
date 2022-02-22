#include<iostream>
 using namespace std;

 int sum(int x, int y)
 {
     return x+y;
 }
 double sum(double x, double y)

 {
     return x+y;
 }

 float sum (int x, int y, int z)
 {
     return x+y+z;
 }

 int main()
 {
     cout <<"The Sum of two integers: "<<sum(10, 20)<<endl;
     cout <<"The Sum of two floats: "<<sum(10.5, 20.7)<<endl;
     cout <<"The Sum of three integers: "<<sum(10.1, 20, 30)<<endl;
 }
