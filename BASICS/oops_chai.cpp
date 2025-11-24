#include<iostream>
#include<vector>
using namespace std;

class Chai {
    public:
        // data members (attributes)   fancy names for variables 
        string teaName; //name of tea
        int servings; // number of servings
        vector<string> ingredients ; // list of ingredients for the tea 

        void displayChaoDetails(){
            cout << "Tea Name : " << teaName << endl ;
            cout << "Servings : " << servings << endl ;
            cout << "Ingredients : "  ;

            for(string ingredient : ingredients){
                cout << ingredient << " ";
            }

            cout << endl;

        }

};

int main(){

    Chai chai;
    chai.teaName = "lemon tea";
    chai.servings = 3;
    chai.ingredients = {"water" , "lemon" , "honey" , "teaLeaves"};

    chai.displayChaoDetails();


    return 0;
    

}