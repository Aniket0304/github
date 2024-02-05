#include <iostream>
#include <map>
using namespace std;
int main(){
    map < int ,string > m;
    m[1]="Aniket";
    m[2]="Dubey"; // ye hua ek tareeka element insert karne ka 
   
    // doosra tareeka ye hai 
    m.insert({5,"Tushar"});

    //ab insab ko print karane ki baari hai
    for (auto i:m){ //aur yaha pe first ka matlab hota hai jaise hamne phle int likha toh phle first likhne pe int print hoga 
        cout<<i.first<<" "<<i.second<<endl;// sorted order me print hota hai ye bhi  
    }cout<<endl; 
    // second matlab ye hai ki pe jo hoga uska aayega

    m.erase(5); // ye hai tareeka erase karne ka 
    for (auto i:m){ 
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl;
    // ab find ka tareeka 
    auto f=m.find(2);

    for (auto i=f;i!=m.end();i++){
    cout<<(*i).first<<" "<<(*i).second<<endl; // * yaha pe i jo pointer hai ya point kar rha hai map me kisi value ko usko fetch karta hai 
    }

}