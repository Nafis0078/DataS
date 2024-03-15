// // Check Leetcode for better understanding...



// #include <iostream>
// using namespace std;
// class Node{
//     public:
//     int val;
//     Node* left;
//     Node* right;

//     Node(int val){
//         this->val = val;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };



//     void toReturn(Node* root){
//             if(root == NULL) return;
//         swap(root->left  , root->right);
//         toReturn(root->left);
//         toReturn(root->right);
//     }
//     Node* invert(Node* root ){
//         toReturn(root);
//         return root;
// }
// int main(){
//         Node* a = new Node(1);
//         Node* b = new Node(2);
//         Node* c = new Node(3);


//         a->left = b;
//         a->right= c;
//         cout<<(a->left)->val;
//         invert(a);
//         cout<<(a->left)->val;

// return 0;
// }




// Check Leetcode for better understanding...



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

    Node* invert(Node* root ){
        if(root == NULL) return NULL;
        swap(root->left  , root->right);
        invert(root->left);
        invert(root->right);
        return root;
}
int main(){
        Node* a = new Node(1);
        Node* b = new Node(2);
        Node* c = new Node(3);


        a->left = b;
        a->right= c;
        cout<<(a->left)->val;
        cout<<endl;
        invert(a);
        cout<<(a->left)->val;

return 0;
}