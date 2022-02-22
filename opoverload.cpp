#include<iostream>
using namespace std;

class complex{
	int real,img;
	public:
	complex(){
	real=0;
	img=0;
	}

	complex(int x,int y){
	real=x;
	img=y;
	}

	void display(){
	cout<<"real is "<<real<<"img is"<<img<<endl;
	}
	//friend complex operator +( ob);

	complex operator + (complex ob){
		complex temp;
		temp.real=real+ob.real;
		temp.img=img+ob.img;
		return temp;
		}
	complex operator - (complex ob){
		complex temp;
		temp.real=real-ob.real;
		temp.img=img-ob.img;
		return temp;
		}
complex operator * (complex ob){
		complex temp;
		temp.real=real*ob.real;
		temp.img=img*ob.img;
		return temp;
		}
complex operator / (complex ob){
		complex temp;
		temp.real=real/ob.real;
		temp.img=img/ob.img;
		return temp;
		}

complex operator & (complex ob){
		complex temp;
		temp.real=real & ob.real;
		temp.img=img&ob.img;
		return temp;
		}
complex operator | (complex ob){
		complex temp;
		temp.real=real & ob.real;
		temp.img=img&ob.img;
		return temp;
		}
complex operator ^ (complex ob){
		complex temp;
		temp.real=real ^ ob.real;
		temp.img=img^ob.img;
		return temp;
		}
complex operator > (complex ob){
		complex temp;
		temp.real=real > ob.real;
		temp.img=img>ob.img;
		return temp;
		}
complex operator >> (complex ob){
		complex temp;
		temp.real=real >> ob.real;
		temp.img=img>>ob.img;
		return temp;
		}
complex operator ++ (){
		complex temp;
		temp.real=++real;
		temp.img=++img;
		return temp;
		}
/*complex operator -- (){
		complex temp;
		temp.real=real--;
		temp.img=img--;
		return temp;
		}*/ //postfix not happening




};


int main()
{
complex c1(1,1),c2(5,10);
complex c3;
c1.display();
c2.display();
c3.display();

cout<<"action starts here"<<endl;
c3=c1+c2;
c3.display();
c3=c1-c2;
c3.display();
c3=c1*c2;
c3.display();
c3=c1/c2;
c3.display();
c3=c1&c2;
c3.display();
c3=c1|c2;
c3.display();
c3=c1^c2;
c3.display();
c3=c1>c2;
c3.display();
c3=c1>>c2;
c3.display();
c3=++c1;
c3.display();
//c3=c1--;
c3.display();



return 0;
}
