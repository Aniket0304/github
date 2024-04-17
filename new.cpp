#include<bits/stdc++.h>
using namespace std;

void MaxOutput(string str ){
    sort(str.begin(),str.end());
    int y=str.length();
    int c,max=-1;
    char p;
    for(int i=0;i<y;i++){
        c=0;
        for (int j=i+1;j<y;j++){
            if(str[i]==str[j]){
                c++;
            }    
        }
        if(c>max){
            p=str[i];
            max=c;
        }  
    }
    cout<<p<<endl;
    
}

int main (){
    string str;
    cin>>str;
    MaxOutput(str);
    return 0;
}
