#include <iostream>
using namespace std;

// Functor that multiplies by a stored factor
struct Multiplier {
    int factor;  // State: member variable

    // Constructor to set the state
    Multiplier(int f) : factor(f) {}

    int operator()(int num) {  // Uses the stored state
        return num * factor;
    }
};

int main() {
    Multiplier times2(2);           // Create with factor=2
    cout << times2(5) << endl;      // Outputs: 10

    Multiplier times3(3);           // Another instance with different state
    cout << times3(5) << endl;      // Outputs: 15

    // You can even change state later
    times2.factor = 4;
    cout << times2(5) << endl;      // Outputs: 20
    cout << times2(8) << endl;      // Outputs: 20
    return 0;
}