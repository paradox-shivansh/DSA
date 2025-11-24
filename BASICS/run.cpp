#include<iostream>

using namespace std;

void game(int a , int b){
    int sum = a+b;
    cout << sum << endl;

}

// creating the own name space 
namespace shiva{
    void display(){
        // comment 
    }
}

int main(){
    cout << "hello world"<< endl;
    int a=10;
    int b=20;
    cout << a+b << endl;

    game(a,b);

    return 0;
}
