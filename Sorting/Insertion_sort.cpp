#include<iostream>
using namespace std;

void insertion_sort(int arr[] , int size){
    

    for (int i = 1; i < size; i++)

    {
        
    int key= arr[i];
    int j=i-1;
        while(j>=0&& arr[j]>key){
            
            arr[j+1]=arr[j];
            j--;
        }

        arr[j+1]=key;


    }
    


 
}


   void printing(int arr[],int size){
    for (int i = 0; i <size; i++)
    {
        cout << arr[i] << " " ;
    }
    
}
    


int main(){ 

    int arr[7]={8,6,1,15,20,16 , 25};
    //
    printing(arr,7);
    cout <<  endl;
    
    //sort
    insertion_sort(arr,7); 
    printing(arr,7);


    return 0;
}