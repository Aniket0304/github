#include<bits/stdc++.h>
using namespace std;
int gcd(int a , int b , int &x ,int&y){// here & sign means reference so if we change something that will also get change
    if (b==0){
        x=0;
        y=1;
        return a;
    }
    int x1,y1;
    int d = gcd(b,a%b,x1,y1);
    x=y1;
    y=x1-y1*(a/b);
    return d;
}
int main(){
int a,b,x,y;
cout<<"Enter the first number ";
cin>>a;
cout<<"Enter the second number ";
cin>>b;
cout<<gcd(a,b,x,y);
}