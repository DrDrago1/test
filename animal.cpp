#include <iostream>
using namespace std;
//base class / super class
class Animal{
public:
            bool alive;
           bool hungry;
         float weight;
unsigned short intellect;
         bool collective;
         void info(){
             cout <<"Whooof! Whooof!"<<endl;

         }

};

//extending class / derived
class Dog:public Animal {
  void bark{
      public:
      cout <<"Whooof! Whooof!"<<endl;
  }
};

class Cat:public Animal {
    public:
    void meow{
      cout <<"Mrrrrrr!..."<<endl;

};

int main(){
    Dog my_dog;
    Cat my_cat;

    cout <<my_dog.alive <<endl;
    cout <<my_cat.alive <<endl;
    cout <<my_dog.weight <<endl;
    cout <<my_cat.weight <<endl;
    my_dog.info();
    //my_cat.bark();
    

}