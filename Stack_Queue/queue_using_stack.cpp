#include<stack>
#include<iostream>

using namespace std;

class MyQueue{

    public:

    stack<int> s1;
    stack<int> s2;

    MyQueue(){

    }

    void push(int x){
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }

        s1.push(x);

        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
    }

    void front(){
        cout << s1.top() << endl;
    }



};


int main(){
    MyQueue q1;

    q1.push(10);
    q1.push(20);
    q1.push(30);
    q1.push(40);
    q1.push(50);

    q1.front();

    return 0;
}