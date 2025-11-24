#include<iostream>
using namespace std;

class Cqueue{
    int front,rear,size;
    int *arr;

    public:
        bool enque(int data){
            if((rear==0 && front==0) || (rear == (front-1)%(size-1))){
                cout<<"queue is full"<<endl;
                return false;
            }else if(front == -1){
                front=rear=0;
                arr[rear]=data;
            }else if(rear==0 && front!=0){
                rear=0;
                arr[rear]=data;
            }else{
                rear++;
                arr[rear]=data;
            }
        }

};