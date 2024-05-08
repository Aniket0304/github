#include<iostream>
using namespace std;
int getSum(int *arr,int n){ // you can write here either *arr or arr[] because it uses address only not the value part
    cout<<"Size " <<sizeof(arr)<<endl;
    int sum=0;
    for(int i =0 ; i<n ;i++ ){
        sum=sum+i[arr];
    }
    return sum;
}
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
    // int value = 8;
    // int *p=&value;
    // cout<< "value before "<<p<<endl;
    // update( p );
    // cout<< "value after "<<p<< endl;// yaha pe value function ki wajah se change nahi hogi 
    // // pointers(p);

    int arr[6]={1,2,3,4,5,8};
    cout<<"Sum of the element of the array " << getSum(arr+3,3); // here arr index has been modified by adding 3 in it means
    // changing the index from 0 to 3. 
    

    return 0;
}