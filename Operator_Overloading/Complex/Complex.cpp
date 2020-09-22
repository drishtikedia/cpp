#include "Complex.h"
#include <iostream>
using namespace std;

int main(){
    Complex c1(10,3);
    Complex c2(5,2);

    Complex c3,c4,c5;

    c3 = c1+c2;
    c3.print();

    c4 = c1-c2;
    c4.print();

    c5 = c1*c2;
    c5.print();

    -c5;
    c5.print();

    bool res = (c1==c2);
    cout<<"boolean "<<res;

}