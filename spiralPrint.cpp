// Alternate code for spiral printing of 2D array 
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector <int> ans;

    int matrix[3][3];
    for(int i=0;i<3;i++){ // row wise input
        for(int j=0;j<3;j++){
            cin>>matrix[i][j];
        }
    }

    int top = 0;
    int bottom = matrix.size()-1;
    int left = 0;
    int right = matrix[0].size()-1;

    vector<int> ans;
    while(top<=bottom && left<=right){
        for(int j=left; j<=right; j++)
        ans.push_back(matrix[top][j]);
        top++;

        for(int i=top; i<=bottom; i++)
        ans.push_back(matrix[i][right]);
        right--;

        if(top<=bottom)
        for(int j=right; j>=left; j--)
        ans.push_back(matrix[bottom][j]);
        bottom--;

        if(left<=right)
        for(int i=bottom; i>=top; i--)
        ans.push_back(matrix[i][left]);
        left++;
    }
    for(auto i: ans)
    cout<<i<<" ";
    }
