#include<iostream>
using namespace std;



class car{
public:
int m;
void display0(){
cout<<"car"<<endl;
}
};



class fuelcar: public car{
public:
int m;
void display1(){
cout<<"fuelcar"<<endl;
}
};



class electricCar: public car{
public:
int m;
void display2(){
cout<<"electriccar"<<endl;
}
};



class hybridCar: public electricCar, public fuelcar{
public:
int m;
void display3(){
cout<<"hybridcar"<<endl;
electricCar::display0();
}
};



int main(){
hybridCar h1;

h1.display1();
h1.display2();
h1.display3();
//h1.setm(15); //ambiguous
}
