#include<iostream>
using namespace std;

#define Pi 3.14 // this is called macros and syntax of creating a macros 
// you can not change the value of Pi defined here in code it will give error
// main features:
// 1. does not need to allot new memory 
// 2. Pi is defined before the running of code 

int main (){
    int i =5;
    double area = Pi * i* i;
    Pi = Pi +1; //this code is unexceptable due the creation of macros 
    cout<<" Area is "<< area <<endl;

    return 0;

    // inline function

    int a = 1;
    int b =2 ;
    int ans =0;
                        // using this whole condition we can do it in one line 
    if(a>b){
        ans=a;
    }
    else{
        ans=b;
    }

       (a>b)    ?    a    :    b ;
    //condition    true     false    poora ho gaya hai itna 

    // inline function 
    // when the function is of one line only then use inline fuction by just adding inline in it 
    // 2-3 line ka bhi hoga toh chalega lekin 3 se zyada hua to HATTT 
    




}





