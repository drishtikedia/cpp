#include "Currency.h"
#include <iostream>

using namespace std;

int main(){
    Currency d1(10,100);
    Currency d2(20,300);
    Currency d3,d4,d5,d6;
    d3 = d1+d2;
    d4 = d1 + 10;
    d5 = d2-d1;
    d5 = d2 -100;
    ++d1;
    cout<<"after addition of op"<<endl;
    d3.display();
    cout<<"after addition"<<endl;
    d4.display();
    cout<<"after subtraction of op"<<endl;
    d5.display();
    cout<<"after subtraction "<<endl;
    d6.display();
    cout<<"incremental value"<<endl;
    d1.display();
    cout<<"boolean "<<(d1==d2)<<endl;

}