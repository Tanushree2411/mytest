#include <iostream>
using namespace std;

class Distance {
    private:
        int meter=5;;
        
        // friend function
        friend int addFive(Distance);


        
};

// friend function definition
int addFive(Distance d) {

    //accessing private members from the friend function
    d.meter += 5;
    return d.meter;
}

int main() {
    Distance D;
    cout << "Distance is: " << addFive(D);
    return 0;
}
