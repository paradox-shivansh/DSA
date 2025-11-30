#include<iostream>
using namespace std;

class Time{

private:
    int h;
    int m;
    int s;

public:
    Time() : h(0), m(0), s(0) {}       // DEFAULT CONSTRUCTOR

    Time(int hour , int min , int sec ) : h(hour) , m(min) , s(sec) {}

    Time operator + (const Time &t) {
        Time temp;
        temp.s = s + t.s;
        temp.m = m + t.m + temp.s/60;
        temp.s %= 60;
        temp.h = h + t.h + temp.m/60;
        temp.m %= 60;
        return temp;
    }

    void show(){
        cout << h << ":" << m << ":" << s;
    }
};

int main(){
    Time t1(5,15,34), t2(9,53,58), t3;
    t3 = t1 + t2;
    t3.show();
}
