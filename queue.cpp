#include <iostream>
#include <queue>
using namespace std;
int main(){
    queue<string> q;
    q.push("Aniket");
    q.push("Dubey");
    cout<<"top element "<<q.front()<<endl;
    cout<<"last element "<<q.back();

}