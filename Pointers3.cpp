#include<iostream>
using namespace std;
int main (){
    /*int arr[10]={2,5,6};
    cout<<"The address of the array is "<< arr << endl;
    cout<< arr[0]<<endl;
    cout<<"The address of the array is "<< &arr[0] << endl;
    cout<<" the value of first index is "<< *arr << endl;
    cout<<" the value of second index is "<< *(arr+1) << endl;
    cout<<" the value of second index is "<< *(arr+2) << endl;
    cout<<" the value of second index is "<< 1[arr] << endl;
    cout<<" the value of second index is "<< *(1+arr) << endl;
    // here we have a formula that is arr[i]=*(arr+i) in terms of pointers.
    // there is new formula in market i[arr]=*(i+arr).*/
    int temp[10]={1,2};
    cout<< sizeof(temp) <<endl;
    cout<<" 1st " << sizeof(*temp) <<endl;
    int *ptr = &temp[0] ;
    cout<< sizeof(ptr) <<endl;// pointer size
    cout<< sizeof(*ptr) <<endl; // size of the value containing at point   
    cout<< sizeof(&ptr) <<endl;//pointer size 

    int a[20]={1,2,3,4};
    cout<< &a[0] << endl;
    cout<< &a <<endl;
    cout<< a << endl; 

    int *p=&a[0];
    cout<< p << endl;
    cout<< *p <<endl;
    cout<< &p <<endl;

}