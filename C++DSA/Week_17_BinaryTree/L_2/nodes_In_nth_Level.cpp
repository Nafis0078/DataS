#include <iostream>
using namespace std;
class Node{
    public:

    int val;
    Node* left;
    Node* right;

     Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
     }
};

void display(Node*root ,int level,int currentLevel){
if (root == NULL) return;
if (currentLevel == level) cout<<root->val<<" ";
display(root->left ,level,currentLevel+1);
display(root->right,level,currentLevel+1);



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
    c->right = g;
int level;
    cout<<"Enter level";
    cin>>level;
    display(a , level,1);




    
return 0;
}



