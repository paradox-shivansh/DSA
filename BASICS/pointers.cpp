#include<iostream>
using namespace std;

void printArr( int arr[] , int length ){
    
    for( int i=0 ; i<length ; i++){
        cout << arr[i] << " " << "degree C" << endl;
    }
    cout << endl ;
}

int prepairOders (int cups){
    int *orders = new int{cups};
}

int main(){
    int temprature[5] = {85,69,63,75,100};
    printArr(temprature , 5);
    cout<< "TEMPRATUR OF CHAI SERVED ON FIRST DAY IS : " << temprature[0];

    // POINTERS IN C++
    int *p = &temprature[0];
    cout << p << endl;
    cout << *p << endl;

    /*POINTERS CAN BE USED TO TOGGLE AND 
    USE STATIC AND DYNAMIC MEMORIES */

    /*FOR ALLOCATING THINGS IN DYNAMIC MEMORY WE 
    USE A "new" KEY WORD WITH CREATS A OBJECT IN 
    DYNAMIC MEMORY*/

    

    return 0;



}