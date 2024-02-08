#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main (){
    vector <int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(7);
    v.push_back(6);
    cout<<"Finding 6 "<<binary_search(v.begin(),v.end(),6)<<endl;

    // ye karta ye hai ki jo tumne find karne ke liye diya hai uska seedha seedha index bata deta hai 
    cout<<"lower bound "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl; 

    // ye karta hai ki jo poocha hai usse jo bhi number range me bada hoga uska index print karke dega
    cout<<"Upper bound "<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    int a=5;
    int b=6;
    cout<<"max "<<max(a,b)<<endl;
    cout<<"min "<<min(a,b)<<endl;
    swap(a,b);
    cout<<"swaped value of a " <<a<<endl;
    string s="abcd";
    reverse(s.begin(),s.end());
    cout<<"new string is "<<s<<endl;
    rotate(v.begin(),v.begin()+1,v.end());
    for(auto i:v){
        cout<<i<<" ";
    }cout<<endl;
    
    sort(v.begin(),v.end());
    for(auto i:v){
        cout<<i<<" ";
    }
}