/*Extend the MyString class with operator overloading for the following
s1+s2
s1+"abcd"
s1=s2
s1==s2
s1+=s2*/
#include<iostream>
#include<string>

using namespace std;

class MyString {
    string s;
    public:
    MyString():s(""){};
    MyString(string x):s(x){};
    void display() const{
        cout<<"\n"<<s;
    }

    friend MyString operator+(MyString &ref1,MyString &ref2 );
    friend MyString operator+(MyString &ref1,string x);
    friend bool operator==(MyString &ref1,MyString &ref2);
    friend MyString operator+=(MyString &ref1,MyString &ref2);

};

MyString operator+(MyString &ref1,MyString &ref2 ){
    string res = ref1.s+ref2.s;
    return MyString(res);
}

MyString operator+(MyString &ref1,string x )
{
    string res = ref1.s+x;
    return MyString(res);
}

MyString operator+=(MyString &ref1,MyString &ref2){
    ref1.s = ref1.s+ref2.s;
    string res=ref1.s;
    return MyString(res);
}

bool operator==(MyString &ref1,MyString &ref2){
    return(ref1.s==ref2.s);
}