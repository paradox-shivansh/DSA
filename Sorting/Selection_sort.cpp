#include<iostream>
using namespace std;

void selection_sort(int arr[] , int size){

    for(int i=0; i<size-1;i++){
        int min_index=i;
        for(int j=i+1;j<size;j++){
            if (arr[min_index] > arr[j])
            {
                min_index=j;
            }
        }
        swap(arr[i],arr[min_index]);
    }
}

void printing(int arr[],int size){
    for (int i = 0; i <size; i++)
    {
        cout << arr[i] << " " ;
    }
     
}


int main(){

    int arr[6]={8,6,1,15,20,16};
    //
    printing(arr,6);
    cout <<  endl;
    
    //sort
    selection_sort(arr,6);
    printing(arr,6);

    
    return 0;
}