/*Extend the MyTime class with operator overloading for the following
t1+t2
t1+ns         //ns is a scalar, no.of seconds
t1-t2
t1-ns
++t1
t1++
t1=t2
t1==t2
cout << t1
cin >> t1*/


#include<iostream>
using namespace std;

class MyTime{
    int m_hours;
    int m_mins;

    public: 
    MyTime(): m_hours(0),m_mins(0){};
    MyTime(int hh,int mm):m_hours(hh),m_mins(mm){};
    void display() const
    {
        cout<<m_hours<<":"<<m_mins<<endl;
    }
    friend MyTime operator+(const MyTime &ref1,const MyTime &ref2);
    friend MyTime operator+(const MyTime &ref1,int nmins);
    friend MyTime operator-(const MyTime &ref1,const MyTime &ref2);
    friend MyTime operator-(const MyTime &ref1,int nmins);
    MyTime &operator++() {
    ++m_mins; // TODO: m_mins > 60
    return *this;
    };
    MyTime operator++(int)
    {     
    MyTime orig(*this);
    this->m_mins++;              //TODO:tm>60
    return orig;   
    };
    MyTime &operator=(const MyTime& ref)
    {
        m_mins = ref.m_mins;
        m_hours = ref.m_hours;
        return *this;
    }

    friend bool operator==(const MyTime &ref1,const MyTime &ref2);
};

MyTime operator+(const MyTime &ref1,const MyTime &ref2){
    int tmins = ref1.m_mins+ref2.m_mins;
    int thrs = ref1.m_hours + ref2.m_hours;
    return MyTime(thrs,tmins);
}

MyTime operator+(const MyTime &ref1,int nmins){
    int tmins = ref1.m_mins + nmins;
    int thrs = ref1.m_hours;
    return MyTime(thrs,tmins);
}

MyTime operator-(const MyTime &ref1,const MyTime &ref2){
    int tmins = ref1.m_mins - ref2.m_mins;
    int thrs = ref1.m_hours - ref2.m_hours;
    return MyTime(thrs,tmins);
}

MyTime operator-(const MyTime &ref1,int nmins){
    int tmins = ref1.m_mins - nmins;
    int thrs = ref1.m_hours;
    return MyTime(thrs,tmins);
}

bool operator==(const MyTime &ref1,const MyTime &ref2)
{
    return((ref1.m_hours == ref2.m_hours)&&(ref1.m_mins==ref2.m_mins));
}