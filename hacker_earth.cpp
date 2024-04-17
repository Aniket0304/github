#include <iostream>
#include <string>
using namespace std;

int getlength(char name[]){
    int count =0;
    for (int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}

int palindrome(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        if(name[s++]!=name[e--]){
            return 0;
            break;
        }
    
    }
    return 1;
    
}
void reverse(char val[], int n ){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(val[s++],val[e--]);
    } 
}

int main(){
char name[20];
cout<<"Enter your name "<<endl;
cin >> name;
char val[20];
for(int i=0;name[i]!='\0'-1;i++){
    val[i]=name[i];
}
cout<<val<<endl;
cout<<"Your name is "<<name<<endl;
cout<<"length of the string is "<<getlength(name)<<endl;
cout<<"length of the string is "<<getlength(val)<<endl;
// reverse(val,getlength(name));
cout<< palindrome(name,getlength(name));


}