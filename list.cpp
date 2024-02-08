//isme empty aur at use nahi hota hai jaise array aur wo deque me hota hai 
// traverse karke waha tak jaana padega element nikalne ke liye 
#include <iostream>
#include <list>
using namespace std;
int main (){
    list <int> l; // wahi sab same operation hote hai 
    l.push_back(1);
    l.push_front(2);
    for (int i :l){
        cout<<i<<" ";
    }
    
}