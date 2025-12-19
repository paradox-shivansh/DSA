#include<iostream>

using namespace std;

class Type{

    public:
    int arr[3];

    Type(){}
    
    Type(int x , int y , int z){
        arr[0] = x;
        arr[1] = y;
        arr[2] = z;
    }

    int operator[](int i);



};

int Type::operator[](int i){
    return arr[i];
}


int main(){
    Type ab(1,2,3);
    cout << ab[1];
    return 0;
}