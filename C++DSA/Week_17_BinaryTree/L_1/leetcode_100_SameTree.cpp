// #include <iostream>
// using namespace std;
// class Node{
//     public:
//     int val;
//     Node* right;
//     Node* left;
//     Node(int val){
//         this->left = NULL;
//         this->right = NULL;
//         this->val = val;

//     }
// };

// bool checkSame(Node* root_a , Node* root_b){
//         if (root_a == NULL && root_b == NULL) return true;
//         if (root_a == NULL ||  root_b == NULL) return false;

//         if(root_a->val != root_b->val) return false;

//         bool leftans = checkSame(root_a->left , root_b->left);
//         if (leftans == false) return false;
//         bool rightans = checkSame(root_a->right , root_b->right);
//         if (rightans == false) return false;
//         return true;

// }
// int main(){
//     Node* a = new Node(1);
//     Node* b = new Node(2);
//     Node* c = new Node(7);


//     Node* d = new Node(1);
//     Node* e = new Node(2);
//     Node* f = new Node(3);

//     a->left = b;
//     a->right= c;

//     d->left = e;
//     d->right = f;

// if (checkSame(a, d)) {
//         cout << "The two trees are the same." << endl;
//     } else {
//         cout << "The two trees are not the same." << endl;
//     }
// return 0;
// }
















// SAME...


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



bool checkSame(Node* root_a , Node* root_d ){
    if (root_a == NULL  && root_d==NULL) return true;
    if(root_a == NULL || root_d==NULL) return false;

    if (root_a->val != root_d->val) return false;

    bool leftans = checkSame(root_a->left , root_d->left);
    if (leftans== false) return false;

    bool rightans = checkSame(root_a->right , root_d->right);
    if (rightans==false) return false;
    return true;
}
int main(){
    Node* a = new Node(10);  
    Node* b = new Node(20);  
    Node* c = new Node(30);  


    Node* d = new Node(10);  
    Node* e = new Node(20);  
    Node* f = new Node(30);

    a->right=c;
    a->left =b;

    d->right= f;
    d->left = e; 

    if (checkSame(a, d)) {
        cout << "The two trees are the same." << endl;
    } else {
        cout << "The two trees are not the same." << endl;
    }
return 0;
}