#include<iostream> 
#include<queue>
using namespace std;
class Node{
    public:
    int data ;
    Node * left ; 
    Node * right;

    Node(int d){
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    } 

};
Node* insertToBST(Node * &root , int d ){
    if ( root == NULL){
        root = new Node(d) ;
        return root;
    }
    if ( d > root -> data){
        root -> right = insertToBST(root -> right , d);
    }
    else {
        root -> left = insertToBST( root -> left , d);
    }
    return root ;
}
void takeinput( Node* &root ){
    int data ; 
    cin>> data; // ye root node ke liye hai bas 

    while ( data != -1){
        root = insertToBST(root , data);
        cin>> data; // yaha pe saare aage ke nodes ke liye hai input lega 
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
void levelordertraversal(Node * root ){
    queue <Node*> q;
    q.push(root);
    q.push(NULL);
    while ( !q.empty()){
        Node* temp = q.front();
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
int main(){
    Node * root = NULL ;
    cout<< " Enter the data for BST "<< endl;
    takeinput(root);
    cout << " Printing the tree "<< endl;
    levelordertraversal(root);
    return 0 ;
}