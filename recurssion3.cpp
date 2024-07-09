#include<iostream>
using namespace std;

void print(int p){

    if(p==0){
        return ;
    }

    cout<<p<<endl;
    
    print (n-1);
    

}
int main(){
    int p;
    cin>>p;

    print(p);
    
    return 0;
}