#include<iostream>
using namespace std;


class Distance{

    public:
    int inch;
    int feet;

    Distance():feet(0),inch(0){}

    Distance(int f , int i):feet(f),inch(i){}

    Distance operator-(){
        feet = -feet;
        inch = -inch;
        return Distance(feet , inch);
    }

};
