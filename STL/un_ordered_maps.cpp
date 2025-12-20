#include<iostream>
#include<unordered_map>
#include<string>

using namespace std;


int main(){

    // User hashmap internally
    //This is like a map, but without sorting. It uses a hash table internally – think of it as buckets where keys are hashed to locations for super-fast access. No order, so traversal isn't sorted. Great for when you need speed over order.

    unordered_map< string , int > studentAges;

    studentAges["Alice"] = 20;
    studentAges["Bob"] = 22;
    studentAges["Charlie"] = 19;

    // No use of make pair because it is not a dictionary
    studentAges.insert({"David", 21});

    cout << "Number of students : " << studentAges.size() << endl;


    cout << "STUDENTS : " << endl;

    int i = 0;
    for (auto &pair : studentAges){
        cout << i << ". " << pair.first << " : " << pair.second << endl;
        i++;

    }

    studentAges.erase("Bob");


    cout << "Number of Bucket : " << studentAges.bucket_count() << endl;


    return 0;



}