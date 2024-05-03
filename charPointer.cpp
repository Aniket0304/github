#include<bits/stdc++.h>
using namespace std;
int main (){
    char ch[6]="abcde";
    char *i=&ch[0];
    cout<< i << endl;// print's the entire string 
    
    char temp[7] = "howisthis";
    char *v = "howisthis";// this is very bad practice
    char *p = &temp;
    cout<< p <<endl;// jab tak isse ek null character nahi mil jaayega tab tak ye nahi rukega 

    
}