#include <iostream>

using namespace std;

// Car industry
class CarIndustry {
    public:
        string CarBrend, CarModel, CarCountry, CarSellCountry;
        
        CarIndustry(string carBrend, string carModel, string carCountry) {
            CarBrend = carBrend;
            CarModel = carModel;
            CarCountry = carCountry; 
            cout << " სახელი : " << CarBrend << endl;
            cout << " მოდელი : " << CarModel << endl;
            cout << " მწარმოებელი ქვეყანა : " << CarCountry << endl;
        }
        
        virtual void carMove()=0;
};

// Car feature
class CarFeature {
    public:
        void carFeatures(int topSpeed, string color, string engine, int doors, int transmission, int price) {
            cout << " Მაქსიმალური სიჩქარე: " << topSpeed << " კმ/სთ" << endl;
            cout << " ფერი : " << color << endl;
            cout << " ძრავი : " << engine << endl;
            cout << " კარი : " << doors << endl;
            cout << " გადაცემათა კოლოფი: " << transmission << endl;
            cout << " ფასი : " << price << " $" << endl;
        }
};

// Country for sale
class Country {
    public:
        void getCountry(string name) {
            cout<< " ქვეყანა სადაც გაიყიდა მანქანა არის : " << name << endl;
            cout<< endl;
        }
};

class Bugatti: public CarIndustry, public CarFeature, public Country {
    public:
        Bugatti(string carBrend, string carModel, string carCountry): CarIndustry(carBrend, carModel, carCountry) {
        
        }
        
        void carMove() {
            cout << " " << CarBrend << " can move" << endl;
        }
        
};

class Ferrari: public CarIndustry, public CarFeature, public Country {
    public:
        Ferrari(string carBrend, string carModel, string carCountry): CarIndustry(carBrend, carModel, carCountry) {
        
        }
        
        void carMove() {
            cout << " " << CarBrend << " can move" << endl;
        }
};
class Lamborghini: public CarIndustry, public CarFeature, public Country {
    public:
        Lamborghini(string carBrend, string carModel, string carCountry): CarIndustry(carBrend, carModel, carCountry) {
        
        }
        
        void carMove() {
            cout << " " << CarBrend << " can move" << endl;
        }
};
    


int main()
{ 

Bugatti bugatti("Bugatti", "atlantic type 57", "France");
bugatti.carFeatures(153, "Black", "3,257 cc DOHC Inline 8", 2, 5, 12000000);
bugatti.carMove();
bugatti.getCountry("United Arab Emirates");

Ferrari ferrari("Ferrari", "F40", "Itally");
ferrari.carFeatures(367, "Red", "2.9L twin-turbo V8", 2, 5,1000000);
ferrari.carMove();
ferrari.getCountry(" USA ");

Lamborghini lamborghini("Lamborghini", " Countach LP400", "Itally");
lamborghini.carFeatures( 181.4, "red", "4-liter V12 engine", 2, 5, 474670);
lamborghini.carMove();
lamborghini.getCountry("United States");


    return 0;
}
