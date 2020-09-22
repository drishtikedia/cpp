#include<iostream>
using namespace std;

class Currency {
    int rup ,pa;
    public:
    Currency():rup(0),pa(0){};
    Currency(int x,int y):rup(x),pa(y){};
    void display() const{
        cout<<rup<<" rupee "<<pa<<" paise "<<endl;
    }
    friend Currency operator+(Currency &ref1,Currency &ref2);
    friend Currency operator+(Currency &ref1,int n);
    friend Currency operator-(Currency &ref1,Currency &ref2);
    friend Currency operator-(Currency &ref1,int n);
    Currency &operator++() {
    ++rup;
    ++pa; 
    return *this;
    };
    friend bool operator==(Currency &ref1,Currency &ref2);

};

Currency operator+(Currency &ref1,Currency &ref2){
        int x =ref1.rup+ref2.rup;
        int y =ref1.pa+ref2.pa;
        return Currency(x,y);
}
Currency operator+(Currency &ref1,int n){
    int x = ref1.rup;
    int y = ref1.pa+n;
    return Currency(x,y);
}
Currency operator-(Currency &ref1,Currency &ref2){
        int x =ref1.rup-ref2.rup;
        int y =ref1.pa-ref2.pa;
        return Currency(x,y);
}
Currency operator-(Currency &ref1,int n){
    int x = ref1.rup;
    int y = ref1.pa-n;
    return Currency(x,y);
}

bool operator==(Currency &ref1,Currency &ref2){
    return((ref1.rup==ref2.rup)&&(ref1.pa==ref2.pa));
}