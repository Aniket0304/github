#include<bits/stdc++.h>
using namespace std;
string remove(string s){
    while(s.length()!=0 && s.find("abc")<s.length()){
        s.erase(s.find("abc"),3);
    }
    return s;
}

int main (){
    string s;
    getline(cin,s);
    cout<<remove(s);
}