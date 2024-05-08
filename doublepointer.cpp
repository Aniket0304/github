#include<iostream>
using namespace std;
void update (int **p2){
    //p2= p2 + 2;
    // is there any change - NO , because there is no such memory alloted to increase. 

    // *p2= *p2 + 1;
    // is there any chagne - YES, the address of p is changed

    **p2=**p2+1;
    // is there any chagne - YES , the value of i has been changed 
    // phle p ke andar phir i ke andar

}
int main (){

    int i = 5 ;
    int *p = &i;
    int **p2= &p;

    // cout<<" Printing p "<< *p <<endl;
    // cout<<" Printing address of p "<< &p <<endl;

    cout<<"before "<<i<<endl;
    cout<<"before "<<p<<endl;
    cout<<"before "<<p2<<endl;

    update(p2);

    cout<<"after "<<i<<endl;
    cout<<"after "<<p<<endl;
    cout<<"after "<<p2<<endl;



}