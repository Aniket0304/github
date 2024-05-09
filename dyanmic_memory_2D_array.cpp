#include <iostream>
using namespace std;
int main (){

    int row, col ;
    cin>>row>>col;
    int **arr = new int *[row]; 

    // creation of 2D array

    for (int i =0 ; i<col; i++){
        arr[i]= new int [row];
    }

    // taking input

    for(int i = 0; i<row; i++){
        for(int j =0 ; j<col ; j++){
            cin>> arr[i][j];
        }
    }

    // printing output

    for(int i = 0; i<row; i++){
        for(int j =0 ; j<col ; j++){
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