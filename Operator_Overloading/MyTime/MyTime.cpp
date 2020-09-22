#include "MyTime.h"
#include <iostream>

using namespace std;

int main(){
    MyTime t1(3,17);
    t1.display();

    MyTime t2(8,25);
    t2.display();

    cout<<"Addition of two operators"<<endl;
    MyTime t3;
    t3 = t1+t2;
    t3.display();

    cout<<"Addition of operator and a scalar"<<endl;
    MyTime t4;
    t4 = t1+ 5;
    t4.display();

    cout<<"Subtraction of two operators"<<endl;
    MyTime t5;
    t5 = t2-t1;
    t5.display();

    cout<<"Subtraction of two operator and scalar"<<endl;
    MyTime t6;
    t6 = t2-10;
    t6.display();

    cout<<" Pre Increment operator"<<endl;
    ++t1;
    t1.display();

    cout<<"Post Increment Operator"<<endl;
    t2++;
    t3= t1+t2;
    t3.display();

    cout<<"Comparison operator"<<endl;
    bool res = (t1==t2);
    cout<<"Boolean result:  "<<res<<endl;

    cout<<"Assignment operator"<<endl;
    MyTime t7;
    t7=t1;
    t7.display();
}
