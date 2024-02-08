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

    set <int>::iterator it = s.begin(); // ye ek specific place ke element ko delete karne ke liye hai 
    it++;
    s.erase(it);

    for (auto i:s){
        cout<<i<<endl;
    }
    cout<< "5 is present or not "<<s.count(5)<<endl; // ye hai pata karne ke liye ki element hai ki nahi 
    
    // ye isliye kaam aata hai ki ek set me uss samay hamara iterator kisko point kar raha hai   
    
    set <int>::iterator itr= s.find(5);
    cout<<"the iterator value is "<<*itr<<endl;

    
    // index find karne ke liye neeche wala code hai 

    int index= distance(s.begin(),itr);
    cout<< "the index of 5 is "<<index<<endl;
}

