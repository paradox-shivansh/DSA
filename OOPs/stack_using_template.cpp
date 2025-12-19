#include<iostream>

#include<vector>

template <class T>
class Stack{

    private:
    std:: vector<T> elements;

    public:
    void push(const &T value){
        elements.push_back(value);
    }


    


};