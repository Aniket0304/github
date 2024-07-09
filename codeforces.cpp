#include<iostream>
using namespace std;
int diff(int a , int e){
    int temp=INT16_MAX;
    for(int i =0 ; i<e ; i++){
        int ans= a[i]-a[i+1];
        if(ans>temp){
            temp=ans;
        }
    }
    return temp;
    
}
int main(){
    int  t, e, k;
    cin<<t<<e<<k;
    vector <int> a;
    for (int i = 0; i < e; i++){
        cin>>a[i];
    }
    diff(a,e);
    for(int i =0;i<k;i++){
        a.push_back(temp);
        diff(a,e);
    }
    

}