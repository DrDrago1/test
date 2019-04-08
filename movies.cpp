#include <iostream>
using namespace std;


class Movies{
    public:
         string title;
         string genre;// text
         int duration;//min
         float rating;
         int age; //age+ 
  // создать конструктор 
  // создать функцию эбаут

 Movies(string t,string g,int d,float r,int a){

        title = t;
        genre = g;
        duration = d;
        rating = r;
        age = a;
 }
 void info(){
     cout <<"title: "<<endl;
     cin >>title;
     cout<<endl;
     cout <<"genre: "<<endl;
     cin >>genre;
       cout<<endl;
     cout <<"duration: "<<endl;
     cin >>duration;
       cout<<endl;
     cout <<"rating: "<<endl;
     cin >>rating;
       cout<<endl;
     cout <<"age: "<<endl;
     cin >>age;
 }
};




int main(){
 // Movie cool movie("Terminator 7","worthless",200,1.5,60);
  //cool_movie.about();
  Movies terminator();
  Movies lol();
  Movies kek();

  terminator.info();
  lol.info();
  kek.info();
}