#include <iostream>

using namespace std;

class School{
  public:
   void average(int a,int b)
   {
         cout <<(a + b)/2<<endl;  
   }
   void average(int a,int b,int c)
   {
         cout <<(a + b +c)/3<<endl;  
   }
   void average(int a,int b,int c,int d)
   {
         cout <<(a + b + c + d)/4<<endl;  
   }
};

int main(){

        School nikitos;
        cout <<"Iz 2: ";
        nikitos.average(20,2);
        cout <<"Iz 3: ";
        nikitos.average(14,7,8);
        cout <<"Iz 4: ";
        nikitos.average(8,2,4,3);
}