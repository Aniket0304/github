#include<bits/stdc++.h>
using namespace std;
void value(string s){
    for(int i=0;i<s.length();i++){
        if(s[i]==' '){
           s.replace(i,1,"@40");// here one is used to specify that only one character after the position "i" will get replaced  
        }// this code works perfectly
        
        else{
            continue;
        }
    }
    cout<<s;
}
int main(){
    string s;
    getline(cin,s);
    value(s);
}
