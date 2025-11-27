#include<iostream>
#include<string>

using namespace std;

class school{
    private:
  

    static int stuID;
    static int teaID;

    public:

    int id;
    string name;
    int age;

    school(string n , int a): name(n) , age(a){}
    
    friend class student;
    friend class teacher;
};

class student : public school{

    public:

    student() : school("", 0) {}  // default empty student


    student(string name , int age): school(name , age){
        
        id = generateid();
    }

    static int generateid(){
        return school::stuID++ ;
    }

    friend void showSrecord(const student &s);
};


class teacher : public school{
    
    public:

    teacher() : school("", 0) {} // default empty teacher

    teacher(string name , int age):school(name , age){
        
        id = generateid();
    }
    
    static int generateid(){
        return teaID++ ;
    }


    friend void showtReecod(const teacher &tc);
};

int school::stuID = 1000;
int school::teaID = 5000;

void showSrecord(const student &s){

    cout << s.name << " : " << s.age << " : " << s.id;
}

void showtReecod(const teacher &t){
    
    cout << t.name << " : " << t.age << " : " << t.id;
}

int main(){

    student *arr = new student[6];

    string n;
    int a;
    for(int i = 3 ; i < 6 ; i++){
        cout << "Enter name: ";
        cin >> n;

        cout << "Enter age: ";
        cin >> a;

        arr[i] = student(n, a);  // assigning object
    }

    arr[0] = student("shivansh" , 19);
    arr[1] = student("adi" , 20);
    arr[2] = student("dinna" , 21);

    for(int i=0; i<3 ; i++){
        showSrecord(arr[i]);
        cout<<endl;
    }

    cout << endl;

    teacher *tee = new teacher[2];

    tee[0] = teacher("P.S.rana" , 40);
    tee[1] = teacher("Mukesh Kuar" , 50);

    for(int i=0; i<3 ; i++){
        showtReecod(tee[i]);
        cout<<endl;
    }



    return 0;
}
