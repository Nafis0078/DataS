// #include <iostream>
// using namespace std;
// class node{
//     public:
//     int val;
//     node* left ;
//     node* right;
//     node(int val){
//         this->val = val;
//         this->left = NULL;
//         this->right = NULL;
//     } 
// };

// void preorder(node* root){
//     if (root==NULL) return;
//     cout<<root->val<<" ";
//     preorder(root->left);
//     preorder(root->right);  
// }
// void inorder(node* root){
//     if (root==NULL) return;
//     inorder(root->left);
//     cout<<root->val<<" ";
//     inorder(root->right);  
// }
// void postorder(node* root){
//     if (root==NULL) return;
//     postorder(root->left);
//     postorder(root->right);  
//     cout<<root->val<<" ";
// }
// int main(){
//     node* a = new node(10);
//     node* b = new node(20);
//     node* c = new node(30);
//     node* d = new node(40);

//     a->left = b;
//     a->right = c;
//     b->left = d;
// preorder(a);
// cout<<endl;
// inorder(a);
// cout<<endl;
// postorder(a);
// return 0;
// }





// Revise


#include <iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* right;
    Node* left;
     Node(int val){
        this->left = NULL;
        this->right = NULL;
        this->val = val;
    }
};

void inorder(Node* root){
    if(root ==  NULL) return;
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}

void preorder(Node* root){
    if (root == NULL ) return;
    cout<<root->val<<" ";
    preorder(root->left);
    preorder(root->right);
    
}


void postorder(Node* root){
    if (root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->val<<" ";
    
}

int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);
    Node* f = new Node(60);
    Node* g = new Node(70);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right =g;
cout<<endl;
    preorder(a);
cout<<endl;
    inorder(a);
cout<<endl;
    postorder(a);

return 0;
}

