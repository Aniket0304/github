#include<iostream>
#include<queue>
using namespace std; 
class node{
    public:
    int data ; 
    node * left ;
    node * right ; 
    node( int d ){
        this ->data = d ; 
        this -> left = NULL;
        this -> right = NULL;
    }
   
};


node* nodebuild(node * root){
    cout<< " Enter the data : "<< endl;
    int data ;
    cin>> data ; 
    root = new node(data);
    if ( data == - 1){
        return NULL;
    }
    cout<<" Enter the data in left node "<< data<< endl;
    root -> left = nodebuild(root -> left );
    cout<< " Enter the data in right node "<< data <<endl;
    root-> right = nodebuild( root -> right);

}

void levelordertraversal(node * root ){
    queue <node*> q;
    q.push(root);
    q.push(NULL);
    while ( !q.empty()){
        node* temp = q.front();
        q.pop();
        if ( temp == NULL){
            cout<< endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<< temp->data << " ";
            if( temp -> left ){
                q.push(temp -> left);
            }
            if ( temp -> right){
                q.push(temp -> right);
            }
        }
    }
}

void inorder(node * root){
    if (root == NULL){
        return ; 
    }
    inorder(root -> left );
    cout<< root -> data << " ";
    inorder(root-> right);
}
void preorder(node * root ){
    if ( root == NULL){
        return ;
    }
    cout<< root -> data <<" ";
    preorder(root -> left);
    preorder( root -> right);
}
void postorder( node * root){
    if ( root == NULL){
        return ;
    }
    postorder( root -> left);
    postorder( root -> right);
    cout<< root ->data << " ";
}
// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
void buildlevelorder(node *&root){ // pointer aur references bhut important hai 
    queue <node*> q;
    cout<< " Enter the data for root node : "<< endl;
    int rootData;
    cin>> rootData;
    root = new node(rootData);
    q.push(root);

    while (!q.empty()){
        node* temp = q.front();
        q.pop();
        cout<< " Enter the data in left of : "<< temp->data << endl;
        int leftData;
        cin >> leftData;
        if ( leftData != -1){
            temp -> left =  new node(leftData);
            q.push( temp -> left);
        }
        cout<< " Enter the data in right of : "<< temp->data << endl;
        int rightData;
        cin >> rightData;
        if ( rightData != -1){
            temp -> right =  new node(rightData);
            q.push( temp -> right);
        }
    }

}
//1 3 7 12 16 17 18 -1 -1 -1 -1 -1 -1 -1 -1 
int main() {
    node * root = NULL; 
    buildlevelorder( root);
    levelordertraversal( root);
    // // creating root 
    // root = nodebuild( root);
    // // travesal using level order or bfs
    // levelordertraversal(root);
    // cout<< " the inorder :"<< endl;
    // inorder( root );
    //  cout<< endl;
    // cout<< " the preorder :"<< endl;
    // preorder( root );
    // cout<< endl;
    // cout<< " the postorder : "<< endl;
    // postorder( root);
    // return 0 ; 
}