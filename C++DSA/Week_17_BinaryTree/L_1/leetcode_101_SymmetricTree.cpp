// Check leetcode...



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

    bool isSymmetric(Node* root) {
        if (root == NULL) return true;
        return isMirror(root->left, root->right);
    }

    bool isMirror(Node* left, Node* right) {
        if (left == NULL && right == NULL) return true;
        if (left == NULL || right == NULL) return false;

        return (left->val == right->val) &&
               isMirror(left->left, right->right) &&
               isMirror(left->right, right->left);
    }

int main(){
        Node* a = new Node(1);
        Node* b = new Node(2);
        Node* c = new Node(3);


        a->left = b;
        a->right= c;
        cout<<(a->left)->val;
        cout<<endl;
        isSymmetric(a);
        cout<<(a->left)->val;

return 0;
}