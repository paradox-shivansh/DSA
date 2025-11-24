#include<iostream>
using namespace std;

class Stack{

    public:
        int top,size;
        int *arr;
        int data;

        Stack(int size){
            this->size=size;
            arr = new int[size];
            top=-1;
        }

        void push(int data){
            if(size-top>1){
                top++;
                arr[top]=data;
            }else{
                cout << "stack over flow "<<endl;
            }
        }

        void pop(){
            if(top>=0){
                top--;
            }else{
                cout<<"stack underflow"<<endl;
            }
        }

        int peak(){
            if(top>=0 && top<size){
                return arr[top];
            }else{
                cout<<"stack is empty"<<endl;
            }
        }

        bool isEmpty(){
            if (top == -1)
            {
                return true;
            }else{
                return false;
            }
            
        }
};


int main(){
    return 0;
}