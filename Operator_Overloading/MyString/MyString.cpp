#include "MyString.h"
#include <iostream>
#include <string>

using namespace std;

int main(){
    MyString s1("My");
    MyString s2("String");
    MyString s3,s4,s5;
    s3=s1+s2;
    s4+=s1;
    s5=s1+"Class";
    s1.display();
    s2.display();
    s3.display();
    s4.display();
    s5.display();
    cout<<"Boolean "<<(s1==s2);

}