#include<bits./stdc++.h>
#include <vector>
using namespace std;
int main(){
        vector<int> ans;
        vector<int> nums;
        for(int i=0;i<8;i++){
            int n;
            cin>>n;
            nums.push_back(n);
        }
        vector<int> val;
        sort(nums.begin(),nums.end());
        for(int i=0;i<8;i++){
            if(nums[i]==nums[i+1]){
                val.push_back(nums[i]);
            }
        }
        for(int i : val){
            cout<<i<<" ";
        }
        
        
}       
