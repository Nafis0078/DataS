
// #include <iostream>
// using namespace std;
// class Node{
//     public:

//     int val;
//     Node* left;
//     Node* right;

//      Node(int val){
//         this->val = val;
//         this->left = NULL;
//         this->right = NULL;
//      }
// };

// void display(Node*root ,int level,int currentLevel){
// if (root == NULL) return;
// if (currentLevel == level) cout<<root->val<<" ";
// display(root->left ,level,currentLevel+1);
// display(root->right,level,currentLevel+1);



// }

// int main(){
//     Node* a = new Node(10);
//     Node* b = new Node(20);
//     Node* c = new Node(30);
//     Node* d = new Node(40);
//     Node* e = new Node(50);
//     Node* f = new Node(60);
//     Node* g = new Node(70);

//     a->left = b;
//     a->right = c;
//     b->left = d;
//     b->right = e;
//     c->left = f;
//     c->right = g;
// int level;
//     cout<<"Enter level";
//     cin>>level;
//     display(a , level,1);




    
// return 0;
// }







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

    int levelsss(Node* root){
        if (root == NULL) return 0;
        return 1 +max(levelsss(root->left) , levelsss(root->right));
    }


    int nodeCheck(Node* root , int nodes, int currentLevel){
            if (root== NULL) return 0;
            if (nodes == currentLevel) cout<<root->val<<" ";
            nodeCheck(root->left , nodes ,currentLevel+1);
            nodeCheck(root->right , nodes ,currentLevel+1);

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

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    g->right = h;
int level;
    cout<<"Total Levels: "<<levelsss(a)<<endl;
    cout<<"Enter level to check it's nodes : ";
    cin>>level;
    nodeCheck(a , level , 1);
return 0;
}