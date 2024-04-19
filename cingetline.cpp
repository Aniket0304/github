#include<bits./stdc++.h>
using namespace std;
int main(){
    char s[40];
    cin.getline(s,40);
    char s1[40];
    cin.getline(s1,40);
    cout<<s<<endl;
    cout<<s1<<endl;
    // if we have to use it for string rather than character
    // string str;
    // getline(cin, str);
    // cout<<str;
    // int len=strlen(s);//workd only for char not for string
    // cout<<len<<endl;//space bhi calculate honge
    cout<<strcmp(s,s1)<<endl;//if 0 then equal otherwise not equal
    strcpy(s1,s);//strcpy(data you want to replace, data you want to copy)
    cout<<s<<s1;
}