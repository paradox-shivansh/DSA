#include <iostream>
using namespace std;



class Test1{
    int t1;
    public:
    Test1(int t1) {
        this->t1 = t1;
    }
    void getT1() {
        cout << t1 << endl;
    }
    friend void add1(Test1* t1);
};
void add1(Test1* t1) {
    t1->t1++;
}
int main() {
    Test1 t1(2);
    add1(&t1);
    t1.getT1();
    t1.getT1();
    t1.getT1();
}