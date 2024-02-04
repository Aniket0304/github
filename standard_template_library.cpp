#include <iostream>
#include <array> //stl ke liye library import kiya hai 

using namespace std;
int main(){
    array <int , 4> a = {1,2,3,4};// ye stl ka main implimentation code hai.
    int size = a.size();
    for (int i =0;i<size;i++){
        cout << a[i] <<" "<<endl;
    }
   cout << "Element at second index is "<< a.at(2)<<endl;
   cout << "Empty or not "<< a.empty()<<endl;
   cout << "First element "<< a.front()<<endl; //ye sare stl ke code hai jo array wali library me aate hai.
   cout << "last element "<< a.back();
}