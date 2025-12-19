#include <iostream>
#include<string>

template<class T>
class MyClass{

    private:
    T data;

    public:

    MyClass(T value) : data(value){}

    void setValue(T value){data = value;}
    T getValue(){return data;}
};

int main(){
    MyClass<int> intObj(42);        // T becomes int
    MyClass<double> doubleObj(3.14); // T becomes double
    MyClass<std::string> strObj("Hello"); // T becomes std::string


}