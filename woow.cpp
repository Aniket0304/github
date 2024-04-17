#include <iostream>
using namespace std;
int main() {
	int n;
    cin>>n;
    int m;
    cin>>m;
    int s[m] ,f[m];
    for (int i=0;i<m;i++){
        cin>>s[i];
    }
    for (int i=0;i<m;i++){
        cin>>f[i];
    }
    for (int i=0;i<m;i++){
        cout<<s[i]<<" ";
    }
    cout<<endl;
    for (int i=0;i<m;i++){
        cout<<f[i]<<" ";
    }
    
}