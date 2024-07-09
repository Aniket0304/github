#include<iostream>
using namespace std;

int factorial(int n ){    // f(n)=n*f(n-1) where f(n) is badi problem and f(n-1) is chotti problem
   // base case
    if (n==0){
        return 1;
    }

    int chotti = factorial(n-1);
    int badi = n*chotti;

    return badi;
}


int main(){
    int n ;
    cin>>n;
    
    int ans= factorial(n);
    
    cout<<ans<<endl;
}