/*Extend the Complex Number implementation with operator overloading for the following (Overload as global friend functions instead of member functions for this problem)
c1+c2
c1-c2
c1*c2
c1==c2
-c1        //unary minus
cout << c1;
cin >> c1;*/

#include<iostream>
using namespace std;

class Complex{
    public:
    int real;
    int imag;
    Complex():real(0),imag(0){};
    Complex(int a ,int b):real(a),imag(b){};
    void print() { cout << real << " + i" << imag << endl; }
    friend Complex operator+(Complex const &,Complex const &);
    friend Complex operator-(Complex const &,Complex const &);
    friend Complex operator*(Complex const &,Complex const &);
    friend bool operator==(Complex const &,Complex const &); 
    Complex operator-(){
        real = -real;
        imag = -imag;
        return *this;
    }
};

Complex operator+(Complex const &ref1,Complex const &ref2){
    int r = ref1.real+ref2.real;
    int i = ref1.imag+ref2.imag;
    return Complex(r,i);
}

Complex operator-(Complex const &ref1,Complex &ref2){
    int r = ref1.real-ref2.real;
    int i = ref1.real - ref2.imag;
    return Complex(r,i);
}

Complex operator*(Complex const &ref1,Complex &ref2){
    int r = ref1.real * ref2.real;
    int i = ref1.real * ref2.imag;
    return Complex(r,i);
}

bool operator==(Complex const &ref1,Complex &ref2){
    return((ref1.real==ref2.real)&&(ref1.imag==ref2.imag));
}

