#include<iostream>
using namespace std;

inline getmax(int&a , int&b){
    return (a>b) ? a: b;
}

int main (){
    int a =1 , b=2;
    int ans= 0;

    ans=getmax(a,b); // inline dalne se yaha pe getmax ka poora function hi yaha pe copy paste ho jaata hai
    cout<< ans << endl;

    a=a+3;
    b=b+1;

    ans=getmax(a,b);
    cout<<ans<<endl;

// default arguments


}


