#include<iostream>
using namespace std;
int main(){
    // creating a 2D array 
    int row ;
    cin>> row ;
    int **arr = new int * [row];
    int *size = new int [row];

    // taking input for size

    for(int i =0 ; i<row ; i++){
        cin >> size[i];
    }

    for(int i = 0 ; i<row ; i++){
        arr[i]= new int [size[i]];
    }

    // taking input

    for(int i = 0; i<row; i++){
        for(int j =0 ; j<size[i] ; j++){
            cin>> arr[i][j];
        }
    }

    // printing output

    for(int i = 0; i<row; i++){
        for(int j =0 ; j<size[i] ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // releasing the array 

    for (int i =0 ; i<col; i++){
        delete [] arr[i];
    }
    delete []arr;
    
    return 0;
}