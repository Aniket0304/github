#include<iostream>
#include<string>
using namespace std;
void reverse(char name[],int n){
    int i=0;
    int j=n-1;
    while(i<j){
        swap(name[i++],name[j--]);
        
    }
    cout<<name;
}
int getlength(char name[]){
    int count =0;
    for (int i =0;name[i]!=0;i++){
        count++;
    }
    return count;
}
int main(){
  char name[20];
  cin>>name;
  cout<<name<<endl;// agar tumko break karna hai toh matlab aadha hi print karna hai toh \0 laga do waha pe 
  //name[4]='\0';
  cout<<name<<endl;
  cout<<getlength(name)<<endl;
  int len=getlength(name);
  reverse(name,len);
}