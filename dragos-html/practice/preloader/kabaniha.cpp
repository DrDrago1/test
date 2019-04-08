#include <iostream>
#include <string> 
using namespace std;

class BikeOwner{
public:
    string fullname;
    unsigned short year;
    bool drunk; 
    char gender;
    unsigned short iq;

    BikeOwner(){

    }

    BikeOwner(string f, unsigned short y){
        fullname = f;
        year = y;
        
    }
    void out(){

        cout << "================BIKER================" << endl;
        cout << "fullname: "<< fullname << endl;
        cout << "year: "<< year << endl;
        cout << "====================================="<< endl;

    }
};

class Bike{
public:
    string model;
    string brand;
    unsigned short year;
    float power;
    unsigned int price;
    float weight;
    string country;
    /////////////////
    BikeOwner *biker;
    ///////////////// 
  Bike(){

  }

  Bike(string m, string b, unsigned short y, float p, unsigned int f,float w, string c){
      model  = m;
      brand  = b;
      year   = y;
      power  = p;
      price  = f;
      weight = w;
      country = c;
  
  }
  void out(){
          cout << "====================BIKE=================" << endl;
          cout << "Model: " << model << endl;
          cout << "Brand: " << brand << endl;
          cout << "Year: " << year  << endl;
          cout << "Power: " << power << endl;
          cout << "Price: " << price << endl;
          cout << "Weight: " << weight << endl;
          cout << "Country: " << country << endl;
          cout << "==========================================" << endl;
  }
      
};

int main(){

    Bike *pmy_bike;
    pmy_bike = new Bike; 

    BikeOwner *pzuckeberg = new BikeOwner("Mark Zuckerberg", 1965);
    
    pzuckeberg_bike->biker = pzuckeberg;

    pmy_bike ->out();

    Bike *pzucherberg_bike = new Bike("Harley Facebitson", "BMW", 2008, 250.5, 50003043, 3200, "Germany"); 
    pzucherberg_bike ->out();
    pzuckeberg ->out();

    delete pzucherberg_bike;
    delete pmy_bike;
   // my_bike.out();
    //zucherberg_bike.out(); 


}