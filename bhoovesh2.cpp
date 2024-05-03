#include<bits/stdc++.h>
using namespace std;
int main() {
	int num;
	cin >> num;
	while(num--){
        long long count=0;
		long long n , k;
		cin>>n>>k;
		priority_queue <int> ans;
		for(long long  i = 0; i<n ;i++){
			long long  v=0;
			cin>>v;
			ans.push(v);
		}
		while(k>0 && !ans.empty()){
			long long  max=ans.top();
            ans.pop();
            count += max;
            ans.push(max/2);
			k--;
		}
    cout<<count<<'\n';
	}
}// long long for the large number of input 