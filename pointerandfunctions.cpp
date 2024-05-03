#include<iostream>
using namespace std;
void pointers(int *p){

    cout<<*p<<endl; // this prints the value of the pointed address
    cout<< p <<endl; // this prints the address of the pointed memory

}
void update(int *p){
    p=p+1;
    cout<<"value after "<<p<<endl;// function ke andar jo address update hoga wo function ke andar hi rahega 
    // ye kaam sirf address ke sath hoga mtlb value change ho sakti hai address nahi
}

int main (){
    int value = 5;

    int *p=&value;

    cout<< "value before "<<p<<endl;

    update( p );

    cout<< "value after "<<p<< endl;// yaha pe value function ki wajah se change nahi hogi 

    // pointers(p);

    return 0;
}