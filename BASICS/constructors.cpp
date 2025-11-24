#include <iostream>
#include <vector>
using namespace std;

class Chai {
public:
    string* name;
    vector<string> ingredients; // Store as vector
    int servings;

    // Constructor
    Chai(string n , vector<string> ing , int ser ) {
        name = new string(n);
        ingredients = ing;
        servings = ser;
    }

    // Member function
    void defaultTea() {
        cout << "Tea Name: " << name << endl;
        cout << "Ingredients of tea: ";
        for (string ing : ingredients) {
            cout << ing << " ";
        }
        cout << endl;
        cout << "Number of servings: " << servings << endl;
    }
};

int main(){
    Chai defaultchai("Lemon Tea" , {"lemon" , "sugar"} , 2);
    defaultchai.defaultTea();


    // Copy the object 
    Chai copiedChai = defaultchai;
    copiedChai.defaultTea();

    return 0;
}
