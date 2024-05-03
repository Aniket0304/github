#include<iostream>
using namespace std;
int main (){
    // int i = 5;// another way to declare pointer is this 
    // int *q=&i;
    // cout<< q<<endl;
    // cout<< *q<<endl;
    // int *p=0;// assigning the value of pointer to 0 
    
    // p=&i;// then storing the address of the i in p.

    // cout<<p<<endl;
    // cout<<*p<<endl;
    int num =5;
    int a =num;
    a++;

    cout<<num<<endl;

    int *p=&num;
    cout<<"before modifying "<<num<<endl;
    (*p)++;
    cout<<"after modifying "<<num<<endl;

    // copying a pointer

    int *q = p;
    cout<<p<<"-"<<q<<endl;
    cout<<*p<<"-"<<*q<<endl;

    int i =3;
    int *t=&i;
    *t=*t+1;
    cout<<t<<endl;// the code will not give the added value because the value will be changed after the code is executed

    t=t+1; // what will be the case if we add 1 in address 
    // yaha pe address me 4 byte ka increament hoga toh matlab ki agar t 100 store kar raha tha toh ab t 104 store karega 
    // aur agar value *t karoge ab toh 104 ki value print karwayega

    return 0;
}