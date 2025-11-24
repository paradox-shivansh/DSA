#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

void printVector ( vector<int> &v){
    for (auto x:v){
        cout << x << " ";
    }
    cout << endl;
}

int main(){

    vector<int> v = {1,2,3,5,6,7,8,5,4,4,5};
    int n;
    cout << "ENTER THE NUMBER YOU WANT TO DELETE" << endl;
   cin >> n;
    // while( n == v(find(v.begin(),v.end(),5))){

    //     v.erase(find(v.begin(),v.end(),5));

    // }

    v.erase(remove(v.begin(),v.end(),n) , v.end());
    printVector(v);
    cout << endl;

    v.resize(10);
    printVector(v);
    cout << endl;
    bool find = v.empty();
    cout << find << endl;
    
    v.resize(13 , 8);
    printVector(v);
    cout << endl;

    v.clear();
    printVector(v);
    cout << endl;
    find = v.empty();
    cout << find << endl;

    return 0;

}