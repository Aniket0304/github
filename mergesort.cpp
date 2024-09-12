#include<iostream>
using namespace std;
int main(){
    int arr[3]={1,3,5};
    int arr1[3]={2,4,6};
    int arr2[8]={};
    for(int i=0,j=0,k=0; i<=3 && j<=3;){
        if(arr[i]<arr1[j] ){
            arr2[k++]=arr[i++];
        }
        else{
            arr2[k++]=arr1[j++];
        }

    }
    for(int i = 0 ; i<6 ; i++){
        cout<<arr2[i]<<" ";
    }
}