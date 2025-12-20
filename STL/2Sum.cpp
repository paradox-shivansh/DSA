#include<iostream>
#include<unordered_map>


using namespace std;



int main(){


    int arr[6] = {5,2,11,7,15};

    unordered_map<int , int> ht;

    // Inserting array elements in hash table
    for(int i=0 ; i<6 ; i++){
        ht.insert({arr[i],i});
        //ht[arr[i]] = i;
    }

    int sum = 9;
    int first , second;
    

    for(int i=0 ; i<6 ; i++){
    
        int num = sum - arr[i];
        if(ht.find(num) != ht.end()  &&   ht[num] != i ){
            cout << "SECOND NUMBER FOUND" << endl;
            cout << "First number is : " << arr[i] << endl;
            cout << "Second number is : " << arr[ht[num]] << endl;

            break;

        }
    }

    // ht.find(num) != ht.end() return a boolean value
    // ht.find(num) returns a intiger so cant be used in a condition 
    


    return 0;
}