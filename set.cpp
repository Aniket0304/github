#include <iostream>
#include <set>
using namespace std;
int main(){ // isme modify ka koi option nahi hota hai sirf add ya delete ho sakta hai 
    set <int> s; // aur ye element repeat nahi karta hai yani ki sab unique element hota hai 
    s.insert(1);
    s.insert(2);
    s.insert(4);
    s.insert(5);
    s.insert(3);
    
    for (auto i:s){
        cout<<i<<endl;
    }cout<<endl;
    // isme bhi erase ka option hota hai 

    set <int>
    s.erase(it);

    for (auto i:s){
        cout<<i<<endl;
    }
    
}