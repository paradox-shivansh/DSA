#include<iostream>
#include<algorithm>

using namespace std;

class Living{
    public:
    virtual void speak(){
        cout << "Speak your own language" << endl;
    }

};

class Human : public Living{

    public:
    void speak(){
        cout << "Hello World" << endl;
    }

};

class Dog : public Living{ 

    public:
    void speak(){
        cout << "Bark-Bark" << endl;
    }
};


int main(){


    // Experimenting Run-time Polymorphism 
    Living *ptr;


    Human nigga ;
    nigga.speak();
    
    Dog tommy;
    tommy.speak();

    cout << endl; 

    // Run-time PolyMorphism 
    ptr = &nigga;
    ptr->speak();

    ptr = &tommy;
    ptr->speak();


    return 0;

}