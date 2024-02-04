//vector is a dynamic array jo ki jab bhar jaata hai toh vector apna size double kar lega. 
#include <iostream>
#include <vector>
using namespace std;
int main (){
vector <int> v;
cout<< "capacity "<<v.capacity()<<endl;

v.push_back(1); // ye element insert karne ke liye hota hai.
cout<< "capacity "<<v.capacity()<<endl;

v.push_back(2);
cout<< "capacity "<<v.capacity()<<endl;

v.push_back(3);
cout<< "capacity "<<v.capacity()<<endl; // yaha pe capaicty double ho gayi jabki size 3 ka hi hai 

cout<< "Size "<<v.size()<<endl;

for (int i:v){ // yaha pe i jo hai wo v ki saari har iteration pe value store karta rahega .
    cout<<i<<" ";
}
cout<<endl;

v.pop_back();// ye hota hai last element remove karne ke liye 
cout<<"size "<<v.size()<<endl;

for (int i:v){
    cout<<i<<" ";
}cout<<endl;
v.clear(); // clear use karne pe element delete hota yani ki wo size 0 hota hai na ki capacity  
cout<<"size "<<v.size()<<endl;
cout<<"capacity "<<v.capacity()<<endl;

vector <int> a(5,1);
vector <int> last (a);
cout<<"capacity "<<last.capacity();
}