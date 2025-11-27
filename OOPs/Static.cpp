#include<iostream>

using namespace std;

class demo{

    public:
    static int count ;
    
    demo(){
        count++;
    }

    static void showCount(){
        cout << count << endl;
    }
};


int demo::count = 0;

int main(){

    demo::showCount();
    
    demo d1 , d2 , d3;
    
    demo::showCount();

    return 0;
}