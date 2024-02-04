// Deq me ham dono taraf se insertion aur deletion kar sakte hai isiliye isse doubly ended queue kaha jaata hai 
#include<iostream>
#include<deque>
using namespace std;
int main (){
    deque<int> d;
    d.push_back(1);  // ye back se element insert kiya hai 
    d.push_front(2);  // ye front se element insert kiya hai 
    for (int i :d){
        cout<<i<<" ";
    }cout<<endl;
    d.pop_front();//shuru ka element pop kar diya hai 
    for (int i :d){
        cout<<i<<" ";
    }cout<<endl;
    d.erase(d.end());  //isme ye hota hai ki element delete karne ke liye ek range deni padti hai ya toh ek karna hai ya ek range me 
    for (int i :d){
        cout<<i<<" ";
    }

}