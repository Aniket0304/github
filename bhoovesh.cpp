#include<bits./stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--){
        vector<int> in;
    vector<int> bn;
    int user;
    cin>>user;
    int user1;
    cin>>user1;
    int a=0,b=0,c=0,d=0;
    int an=0;
    int ans=0;
    while(user>0){
        a=user%10;
        c=c*10+a;
        user=user/10;
    }
    while(user1>0){
        b=user1%10;
        d=d*10+b;
        user1=user1/10;
    }
    int add=c+d;
    while(add>0){
        an=add%10;
        ans=ans*10+an;
        add=add/10;
    }
    int val=ans;
    while(val>0){
        if (ans%10==0){
            ans=ans/10;
        }
        val=val/10;
    }
    cout<<ans;
    }
    
}