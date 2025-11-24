#include<iostream>
using namespace std;

void bubble_sort(int arr[] , int size){

    for (int i = 0; i < size-1; i++)
    {
        bool if_swap=false;
        for (int j = 0; j < size-i-1; j++)
        {
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                if_swap=true;
            }
        }
        
        if (if_swap==false)
        {
            cout<<"Swaping is over" << endl;
            break;
        }
        
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
    bubble_sort(arr,7); 
    printing(arr,7);


    return 0;
}