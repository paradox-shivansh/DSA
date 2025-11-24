#include<iostream>

using namespace std;

void merge(int arr[] , int start , int end){

    // Creating partetion 
    int mid = (start+end)/2; 

    // Calculating length of array 1 and 2 
    int len1 = mid - start + 1;
    int len2 = end - mid;

    // Creating dynamic arrays
    int *first = new int[len1];
    int *second = new int[len2];

    // Copying the values in new array
    int k = start;
    for (int i=0; i<len1 ; i++){
        first[i] = arr[k++];
    }

    k = mid+1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[k++];
    }
    

    // MERGE 2 ARRAYS 
    int index1 = 0;
    int index2 = 0;
    int mainArrayIndex = start;

    // Merge when length are same
    while( index1 < len1 && index2 < len2){
        if(first[index1] < second[index2]){
            arr[mainArrayIndex++] = first[index1++];
        }else{
            arr[mainArrayIndex++] = second[index2++];
        }
    }

    // If the lengths are not same 
    while(index1 < len1) arr[mainArrayIndex++] = first[index1++];
    while(index2 < len2) arr[mainArrayIndex++] = second[index2++];



}

void mergeSort( int arr[] , int start , int end){

    int mid = (start+end)/2;

    // BASE CASE
    if (start >= end ) return ;

    // left part sort
    mergeSort(arr , start , mid);

    // left part sort
    mergeSort(arr , mid+1 , end);

    // MERGE
    merge(arr , start , end);

}



// Printing staement 
void print(int arr[] , int n){
    for (int i=0 ;  i<n ; i++) cout << arr[i] << " ";


    cout << endl;
}


int main(){

cout << "hello world ";

//  int n;
//  cout << "Enter the size of array : " ;
//  cin>>n;
//  int arr[n];

//  cout << "Enter an arr of size : " << n << " -> ";
//  for (int i = 0; i < n; i++)
//  {
//     cin >> arr[i];
//  }
 
 int arr01[7] = {38 , 27 , 43 , 3 , 9 , 82 , 10};
 int n = 7;
 mergeSort(arr01 , 0 , n-1);

 print(arr01 , n);



 return 0;

}