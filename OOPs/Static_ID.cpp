#include<iostream>
#include<string>
using namespace std;

class MySchool{
    private:
    int age;
    string name;
    int id;

    static int currId;

    public:

    MySchool(int age , string name){
        this->age = age;
        this->name = name;

        id = generateID();
    }

    static int generateID(){
        return currId++;
    }

    void show(){
        cout << "The child's name is : " << name << " and age is : " << age << "  " << id << endl;
        
    }
};

int MySchool::currId = 1000;

int main(){

    MySchool s1(19 , "shivansh"),s2 (20 , "adi"),s3(30 , "ramesh");
    s1.show();
    s2.show();
    s3.show();


    return 0;
}