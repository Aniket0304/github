#include<iostream>
using namespace std;
bool ispresent(int arr[][4],int target, int row, int col){
    for(int i=0;i<3;i++){ 
        for(int j=0;j<4;j++){
            if (arr[i][j]==target){
                return 1;
            }
        }
    }
    return 0;
}

void indexfound(int arr[][4],int target, int row, int col){
    if(ispresent(arr,target,3,4)){
    for(int i=0;i<3;i++){ 
        for(int j=0;j<4;j++){
            if (arr[i][j]==target){
                cout<<i<<" "<<j<<endl;
            }
        }
    }
    }
    else{
        cout<<"Error"<<endl;
    }
}

int main (){
    //int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};//the first one shows the rows and the second one shows the columns

    //this will take input as row wise input

    int arr[3][4]={{1,2,3,4},{7,8,9,10},{11,12,13,14}};//this will take input in which you can define the elements of rows 

    //input in string 
    // for(int i=0;i<3;i++){ // row wise input
    //     for(int j=0;j<4;j++){
    //         cin>>arr[i][j];
    //     }
    // }

    // for(int i=0;i<4;i++){ // column wise input
    //     for(int j=0;j<3;j++){
    //         cin>>arr[j][i];
    //     }
    // }
    
    //for output

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }

    cout<<"Element you want to find "<<endl;
    int target;
    cin>>target;

    if(ispresent(arr,target,3,4)){
        cout<<"Found"<<endl;;
    }
    else{
        cout<<"Not Found"<<endl;;
    }
    indexfound(arr,target,3,4);
}