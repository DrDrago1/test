#include <iostream>
using namespace std;
// generic functions / classes

// generic -> universal TYPE
template <typename T>
T divide(T a,T b){
 return a / b;
}

int main(){
    
cout << divide<int>(21,20)<<endl;
cout << divide<int>(21.0,20.0)<<endl;

}