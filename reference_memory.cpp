#include<iostream>
using namespace std;

int& function(int num){ // super bad practice isliye kyunki num ek local variable hai uska lifespan is loop ke baad khtm hai
// toh phir ye memory hi khtm aur agar baad me access karna hua toh wo bhi nahi kar skte 
    int num=a;
    int &ans= num;
    return ans;
}

void update(int &y){// yaha pe extra memory allot nahi ho rhi seedha main value change ho raha hai 
    y=y+1;
}

// void update (int n){ // is condition me kya hua na ki yaha pe ek alag n banega aur global variable ka value copy hoga 
//     n=n+1; // aur phir value chagne hoga toh woh n me change hoga sirf issi value ke 
// }// yaha par extra memory allot ho rahi hai 


int main (){
    int n =5;
    cout<< "before "<<n<<endl;
    update(n);
    cout<< "after "<<n<<endl;
}