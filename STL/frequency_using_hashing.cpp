#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    // Example array (you can change this)
    vector<int> arr = {1, 2, 3, 2, 4, 1, 5, 2, 3, 1};

    unordered_map <int , int > fre;

    for (int num : arr){
        fre[num]++;
    }


    for (const auto &pair : fre){
        if (pair.second > 1){
            cout << pair.first << " : " << pair.second << endl;

        }
    }

    return 0;



}