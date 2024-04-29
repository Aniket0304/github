#include<iostream>
using namespace std;

int main(){
    int num = 5;
    cout<<"address of the num is "<<&num<<endl; // this will print the pointer or the num's address 
    int *p = &num;
    cout<<"address of the p is "<<p<< endl; // p me address store hota hai

    *p=*p+1;
    cout<<*p<<endl;

    cout<<"value of ptr is : "<<*p <<endl;// ptr denotes the address and * denotes the value stored in that address 
    cout<<"value of ptr is : "<<p <<endl;

    double val = 4.3;
    double *ptr2 = &val;

    cout<<"Address of the val is "<<ptr2<<endl;
    cout<<"The value is "<<*ptr2<<endl;

    cout<< "Size of the num is : "<< sizeof(num)<<endl;
    cout<< "Size of the pointer is : "<< sizeof(p)<<endl;
    cout<< "Size of the pointer is : "<< sizeof(ptr2)<<endl;

    return 0;
}