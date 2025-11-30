#include <iostream>
using namespace std;

// ----------- Abstract Base Class -------------
class Student {
protected:
    string name;
    int age;

public:
    Student(string n, int a) : name(n), age(a) {}

    // Pure virtual function (makes class abstract)
    virtual void display() = 0;

    virtual ~Student() {} // virtual destructor
};

// ----------- Derived Class 1 : Engineering -------------
class Engineering : public Student {
    string branch;
public:
    Engineering(string n, int a, string b) : Student(n, a), branch(b) {}

    void display() override {
        cout << "[ENGINEERING STUDENT]\n";
        cout << "Name: " << name << "\nAge: " << age 
             << "\nBranch: " << branch << endl << endl;
    }
};

// ----------- Derived Class 2 : Medicine -------------
class Medicine : public Student {
    string specialization;
public:
    Medicine(string n, int a, string s) : Student(n, a), specialization(s) {}

    void display() override {
        cout << "[MEDICINE STUDENT]\n";
        cout << "Name: " << name << "\nAge: " << age
             << "\nSpecialization: " << specialization << endl << endl;
    }
};

// ----------- Derived Class 3 : Science -------------
class Science : public Student {
    string field;
public:
    Science(string n, int a, string f) : Student(n, a), field(f) {}

    void display() override {
        cout << "[SCIENCE STUDENT]\n";
        cout << "Name: " << name << "\nAge: " << age
             << "\nField: " << field << endl << endl;
    }
};

// ---------------- MAIN FUNCTION -------------------
int main() {
    // Array of base class pointers
    Student* arr[3];

    // Storing derived class objects
    arr[0] = new Engineering("Shivansh", 19, "Computer Science");
    arr[1] = new Medicine("Aditya", 20, "Cardiology");
    arr[2] = new Science("Dinnah", 21, "Physics");

    // Processing through base class pointer
    for (int i = 0; i < 3; i++) {
        arr[i]->display();   // Runtime Polymorphism
    }

    // free memory
    for (int i = 0; i < 3; i++) {
        delete arr[i];
    }

    return 0;
}
