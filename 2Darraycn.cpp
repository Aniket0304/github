#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> ans;
    int arr[3][3];
    for(int i=0;i<3;i++){ // row wise input
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    int count =0;
    int total=9;
    int startingRow=0;
    int startingCol=0;
    int endingRow=3-1;
    int endingCol=3-1;

    while(count<total){
        for(int index=startingCol;count < total && index<=endingCol;index++){
            ans.push_back(arr[startingRow][index]);
            count++;
        }startingRow++;


        for(int index=startingRow;count < total && index<=endingRow;index++){
            ans.push_back(arr[index][endingCol]);
            count++;
        }endingCol--;

        
        for(int index=endingCol;count < total && index>=startingCol;index--){
            ans.push_back(arr[endingRow][index]);
            count++;
        }endingRow--;


        for(int index=endingRow;count < total && index>=startingRow;index--){
            ans.push_back(arr[index][startingCol]);
            count++;
        }startingCol++;

    }
    for(int i:ans){
        cout<<i<<" ";
    }
    
    
}