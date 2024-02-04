#include <iostream>
#include<queue>
using namespace std;
int main (){

    // max heap hai ye 
    //isme se agar koi bhi element nikalenge toh wo sabse maximum hoga 
    priority_queue<int > maxi ;

    // min heap banayenge ham 
    // isme ye hota hai ki koi bhi element nikalenge to wo sabse minimum hoga 
    priority_queue<int ,vector<int> , greater<int>> mini;

    // ab isme element kaise push karne hai wo dekhenge 
    maxi.push(1);
    maxi.push(2);
    maxi.push(3);
    maxi.push(4);
    for (int i=0;i<=maxi.size();i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
}