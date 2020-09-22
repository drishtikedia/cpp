#include "Fraction.h"
#include <iostream>
using namespace std;

int main(){
    Fraction r1(10,20);
    Fraction r2(30,20);
    Fraction r3,r4,r5,r6,r7,r8;
    cout<<"\nMultiplication of ops: ";
    r3 = r1*r2;
    r3.print();
    r4 = r1*2;
    cout<<"\nMultiplication with num end: ";
    r4.print();
    r5 = 2*r2;
    cout<<"\nMultiplication with num first: ";
    r5.print();
    r6 = r1 + r2;
    cout<<"\nAddition of ops: ";
    r6.print();
    r7 = r2-r1;
    cout<<"\nSubtraction of ops: ";
    r7.print();
    r8 = r1 + 2;
    cout<<"\nAddition with number: ";
    r8.print();
    cout<<"\nMultiplication of ops: ";
    cout<<(r1==r2);


}