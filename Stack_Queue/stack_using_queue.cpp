#include<queue>
#include<iostream>

using namespace std;


class MyStack{

    public:
    queue<int> q1;
    queue<int> q2;

    MyStack(){

    }

    void push(int x){
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }

        q1.push(x);

        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
    }

    void top(){
        cout << q1.front() << endl;
    }

};

int main(){
    MyStack s1;

    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);

    s1.top();
}