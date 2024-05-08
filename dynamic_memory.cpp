#include<iostream>
using namespace std;
int main (){
    int n ;
    cin>>n;
    int arr[n];// this is a very bad practice kabhi nahi karna ye 
    // yaha pe stack allot hota hai jo chota hai toh usme jab value badi jaati hai code run hote samay 
    // toh kuch compiler error de skte hai isiliye we use heap

    new int ; // new likh ke jo chahiye wo likh do like int ya char.

    // isme length ya size define nahi kar skte hai 
    // isse khte hai dynamic memory aur ye heap pe create hoti hai 
    // ab isko access kaise karenge 

    char *ch= new int;// yaha pe name allowed nahi hai sirf address hi hota hai 

    // the best way it is described [image-comments/1111.png]

    // how to create array in heap 
    new int[5];// this is for creating a array with address only 
    int *array= new int[5]; // this is for naming the array
    // jo pointer bana hai wo stack me store hoga toh uska memory 8 byte aur baaki heap me 5 integer ka 20 
    // toh total memory allot hue hai wo 8 + 20 yani 28 byte allot hue hai 

}