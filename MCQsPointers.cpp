#include<iostream>
using namespace std;
int main(){
    // int *p=0;
    // int first=10;
    // *p= first;// & symbol is not used so there is no allotment 
    // cout<<p<<endl;// no output because there is no value of p 

    int arr[6]={11,12,31};
    int *p=arr;
    cout<<p[2]<<endl;// p[2]=*(p+2) and p = arr[0](address only )
}