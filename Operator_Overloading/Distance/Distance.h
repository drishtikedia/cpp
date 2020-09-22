#include<iostream>
using namespace std;

class Distance {
    int km ,m;
    public:
    Distance():km(0),m(0){};
    Distance(int x,int y):km(x),m(y){};
    void display() const{
        cout<<km<<" km "<<m<<" m "<<endl;
    }
    friend Distance operator+(Distance &ref1,Distance &ref2);
    friend Distance operator+(Distance &ref1,int n);
    friend Distance operator-(Distance &ref1,Distance &ref2);
    friend Distance operator-(Distance &ref1,int n);
    Distance &operator++() {
    ++km;
    ++m; 
    return *this;
    };
    friend bool operator==(Distance &ref1,Distance &ref2);

};

Distance operator+(Distance &ref1,Distance &ref2){
        int x =ref1.km+ref2.km;
        int y =ref1.m+ref2.m;
        return Distance(x,y);
}
Distance operator+(Distance &ref1,int n){
    int x = ref1.km;
    int y = ref1.m+n;
    return Distance(x,y);
}
Distance operator-(Distance &ref1,Distance &ref2){
        int x =ref1.km-ref2.km;
        int y =ref1.m-ref2.m;
        return Distance(x,y);
}
Distance operator-(Distance &ref1,int n){
    int x = ref1.km;
    int y = ref1.m-n;
    return Distance(x,y);
}

bool operator==(Distance &ref1,Distance &ref2){
    return((ref1.km==ref2.km)&&(ref1.m==ref2.m));
}




