#include <iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* right;
    Node* left;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
        }
};

void display(Node* root){
    if (root== NULL) return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
}



int find(Node* root){
    if(root == NULL) return NULL;
    if(root->val == 20) cout<<"Found: "<<root->val;
    if(root->val == 30) cout<<"Found: "<<root->val;
    find(root->right);
    find(root->left);
}
int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);
    Node* f = new Node(60);
    Node* g = new Node(70);
    Node* h = new Node(80);
    Node* i = new Node(90);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    d->left = h;
    g->right = i;

    display(a);
    cout<<endl;
    find(a);
return 0;
}

if(root->left == root->right) cout<<"Ancestor: "<<root->val;
