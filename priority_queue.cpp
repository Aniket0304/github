#include <iostream>
#include<queue>
using namespace std;
int main (){

    // max heap hai ye 
    //isme se agar koi bhi element nikalenge toh wo sabse maximum hoga 
    priority_queue<int > maxi ;

    // min heap banayenge ham 
    // isme ye hota hai ki koi bhi element nikalenge to wo sabse minimum hoga 
    priority_queue<int ,vector<int> , greater<int>> mini; //greater int ke liye 

    // ab isme element kaise push karne hai wo dekhenge 
    maxi.push(1);
    maxi.push(9);
    maxi.push(3);
    maxi.push(0);
    int n = maxi.size();
    for (int i=0;i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }cout<<endl;
    mini.push(1);
    mini.push(9);
    mini.push(8);
    mini.push(4);
    mini.push(3);
    int m = mini.size();
    for (int i =0;i<m;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }cout<<endl;
    cout<<"Khali hai kya bhai "<<mini.empty();
}