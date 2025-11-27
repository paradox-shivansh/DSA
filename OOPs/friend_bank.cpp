#include<iostream>

using namespace std;

class Bank{
    private:
    int id;
    int balance;

    static int currID;

    public:
    Bank(int balance){
        this->balance = balance;

        id = generateID();
    }

    static int generateID(){
        return currID++;
    }

    void show(){
        cout << "Coustomer ID : " << id << " & Balance is : " << balance << endl;;
    }

    friend int addBalance( Bank &acc , int money);

};

int Bank:: currID = 1000;

int addBalance( Bank &acc , int money){
    return acc.balance += money;
}


int main(){

    Bank ram(500) , shyam(1000) , adi(1500);
    ram.show();
    shyam.show();
    adi.show();

    cout << endl;

    addBalance(ram , 1000);
    ram.show();
    shyam.show();
    adi.show();


    return 0;



}