#include<iostream>
#include<map>
#include<string>

using namespace std;


int main(){

    map < string , int > studentAge;

    // Insert using [] operator
    studentAge["Shivansh"] = 20;
    studentAge["Anni"] = 22;
    studentAge["Jand"] = 23;
    studentAge["Nigga"] = 19;
    studentAge["laxy"] = 45;
    studentAge["tk"] = 48;


    // Insert using insert function
    studentAge.insert(make_pair("runak" , 50));

    // Traverse (sorted by key: Alice, Bob, Charlie, David)
    std::cout << "Students: " << std::endl;
    for (auto& pair : studentAge) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    // Find and access
    if (studentAge.find("Bob") != studentAge.end()) {
        std::cout << "Bob's age: " << studentAge["Bob"] << std::endl;  // 22
        // Or safely: studentAges.at("Bob")
    }

    // Erase
    studentAge.erase("Charlie");
    std::cout << "After erasing Charlie, size: " << studentAge.size() << std::endl;  // 3

    // What if key not found?
    if (studentAge.count("Eve") == 0) {
        std::cout << "Eve not found." << std::endl;}

}