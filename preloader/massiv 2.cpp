#include <iostream>
#include <string>
using namespace std;

class Product{
 public:
 string name;
  int price;
  string category;

  Product(){

  }
   
    Product(string n,int p,string c){
        name = n;
        price = p;
        category = c;
    }
};

//string names[5] = {"Lotery Ticket","Ice Cream","Bisquit","Coffee","Water"};
//int prices[5] = {50,10,100,5,200},i;

Product products[5];
int min_price = 0;
int max_price = 0;

int main(){
    products[0] = Product("Lotery Ticket", 50,"Adventure"); 
    products[1] = Product("Ice Cream", 10,"Food" ); 
    products[2] = Product("Bisquit", 100,"Food"); 
    products[3] = Product("Coffee", 5, "Drink"); 
    products[4] = Product("Water",200,"Drink"); 
    //Product p("Lotery Ticket", 50);
    // products[4].price
    cout << "From";
    cin >>min_price;
    cout << "To";
    cin >> max_price;

    for (int i = 0; i < 5; i++){
        if( products[i].price >= min_price && products[i].price <= max_price){
        cout <<products[i].name<< " :  " <<products [i].price << endl<<products[i].category<<" :  ";   
        }
        
    }
}