#include<iostream>
using namespace std;

class loc{

    public:
    int longitude;
    int latitude;

    loc():longitude(0),latitude(0){};
    loc(int lon , int lat):longitude(lon),latitude(lat){};

    loc operator+(loc l2);

    void show(){
        cout << "Longitude : " << longitude << endl;
        cout << "Lantitude : " << latitude << endl;
    }


};

loc loc::operator+(loc l2){
    loc temp;
    temp.longitude = longitude+l2.longitude;
    temp.latitude = latitude+l2.latitude;

    return temp;
}

int main()
{
loc ob1(10, 20), ob2( 5, 30);
ob1.show(); // displays 10 20
ob2.show(); // displays 5 30
ob1 = ob1 + ob2;
ob1.show(); // displays 15 50
return 0;
}
