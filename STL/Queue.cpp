#include<iostream>
using namespace std;


class Queue{
    int *arr;
    int size;
    int front;
    int rear;

    public:
        Queue(){
            int size = 10001;
            arr = new int[size];
            front = 0;
            rear = 0;
        }

        bool isEmpty(){
            if(front == rear){
                cout << "The queue is empty" << endl;
                return true;
            }else{
                return false;
            }
        }

        void Enqueu(int data){
            if(rear == front){
                cout<<"the queue is full"<<endl;
            }else{
                arr[rear]=data;
                rear++;
            }
        }

        int Dequeue(){
    if(front == rear){
        cout << "Queue is empty" << endl;
        return -1;
    } else {
        int ans = arr[front];
        arr[front] = -1; // optional
        front++;
        if(front == rear){ // reset queue when empty
            front = 0;
            rear = 0;
        }
        return ans;
    }
}


};


int main(){
    return 0;
}