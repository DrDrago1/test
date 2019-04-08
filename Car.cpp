#include <iostream>
using namespace std;

class Car{
  public:
  float power;          // horsepower
  unsigned int year;    //fabrication
  unsigned long price;  //MDL
  bool sport;
Car(float p, unsigned int y, unsigned long d,bool s){
    power = p;
    year = y;
    price = d;
    sport = s;
}
bool isBetter(Car other){
    if( power > other.power &&
        year > other.year &&
        price < other.price)
        {
           return true;
        }
        else{
          return false; 
        }
     
}
//declare ">"  operator for class Car
bool operator < (Car other){
    if( power > other.power &&
        year > other.year &&
        price < other.price)
        {
           return true;
        }
        else{
          return false; 
        }
} 

 void info(){
     cout <<"Car:"<<" power,"<<power<<" year, "<<year<<" price, "<<price<<" MDL "<<"sport"<<sport<< endl;
 }
};

int main(){
    Car my_friends_car(200, 2010, 1000000, 0);
    Car my_car(242342 , 20024, 100, 1 );
    my_car.info();
    my_friends_car.info();

    
            
            if(my_car < my_friends_car)
           {
                cout <<"My car is better!";
           }
}
        

