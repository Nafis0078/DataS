// // #include <iostream>
// // using namespace std;
// // class Node{
// //     public:
// //     int val;
// //     Node* left;
// //     Node* right;

// //     Node(int val){
// //         this->val = val;
// //         this->left = NULL;
// //         this->right = NULL;
// //     }
// // };

// // void display(Node* root){
// //     if (root == NULL) return;
// //     cout<<root->val<<" ";
// //     display(root->left);
// //     display(root->right);
// // }
// // int main(){
    
// //     Node* a = new Node(10);
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

//     display(a);



// return 0;
// }







// Revision


#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int maxDia = 0;
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->left = NULL;
        this->right = NULL;
        this->val = val;
    };


void display(Node* root){
    if(root == NULL) return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
}

int summ(Node* root){
    if(root == NULL) return 0;
    return root->val + summ(root->left) + summ(root->right);
    }
int product(Node* root){
    if(root == NULL) return 1;
    return root->val * product(root->left) * product(root->right);
    }


int size(Node* root){
    if(root ==NULL) return 0;
    return 1 + size(root->right) + size(root->left);

}


int maxValue( Node* root){
    if (root == NULL) return INT_MIN;
    int LMax= maxValue(root->left);
    int Rmax=maxValue(root->right);
    return max(root->val ,max(LMax,Rmax));
    }


int minValue( Node* root){
    if (root == NULL) return INT_MAX;
    int LMax= minValue(root->left);
    int Rmax=minValue(root->right);
    return min(root->val ,min(LMax,Rmax));
    }


int levels(Node* root){
    if (root == NULL) return 0;
    return 1+max(levels(root->right) , levels(root->left));
}

// int diameter(Node* root){
//     if (root == NULL) return 0;
//     int dia = (levels(root->right) + levels(root->left));
//     maxDia = max(dia,maxDia);
//     diameter(root->left);
//     diameter(root->right);

// };
int main(){
        Node* a = new Node(1);
        Node* b = new Node(2);
        Node* c = new Node(3);
        Node* d = new Node(4);
        Node* e = new Node(5);
        Node* f = new Node(6);
        Node* g = new Node(7);

        a->left = b;
        a->right = c;
        b->left = d;
        b->right = e;
        c->left = f;
        c->right = g;
        display(a);
        cout<<endl;
        cout<<"SUM: "<<summ(a);
        cout<<endl;
        cout<<"PRODUCT: "<<product(a);
        cout<<endl;
        cout<<"SIZE: "<<size(a);
        cout<<endl;
        cout<<"MAXIMUN VALUE: "<<maxValue(a);
        cout<<endl;
        cout<<"MINIMUN VALUE: "<<minValue(a);
        cout<<endl;
        cout<<"LEVELS: "<<levels(a);
        // cout<<endl;
        // cout<<"DIAMETER: "<<diameter(a);
return 0;
}
}



// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// class Node {
// public:
//     int maxDia = 0;
//     int val;
//     Node* left;
//     Node* right;

//     Node(int val) {
//         this->left = NULL;
//         this->right = NULL;
//         this->val = val;
//     }

//     void display(Node* root) {
//         if (root == NULL) return;
//         cout << root->val << " ";
//         display(root->left);
//         display(root->right);
//     }

//     int summ(Node* root) {
//         if (root == NULL) return 0;
//         return root->val + summ(root->left) + summ(root->right);
//     }

//     int product(Node* root) {
//         if (root == NULL) return 1;
//         return root->val * product(root->left) * product(root->right);
//     }

//     int size(Node* root) {
//         if (root == NULL) return 0;
//         return 1 + size(root->right) + size(root->left);
//     }

//     int maxValue(Node* root) {
//         if (root == NULL) return INT_MIN;
//         int LMax = maxValue(root->left);
//         int Rmax = maxValue(root->right);
//         return max(root->val, max(LMax, Rmax));
//     }

//     int minValue(Node* root) {
//         if (root == NULL) return INT_MAX;
//         int LMax = minValue(root->left);
//         int Rmax = minValue(root->right);
//         return min(root->val, min(LMax, Rmax));
//     }

//     int levels(Node* root) {
//         if (root == NULL) return 0;
//         return 1 + max(levels(root->right), levels(root->left));
//     }

//     int diameter(Node* root) {
//         if (root == NULL) return 0;
//         int dia = levels(root->right) + levels(root->left);
//         root->maxDia = max(dia, root->maxDia);
//         diameter(root->left);
//          diameter(root->right);

//     }
// };

// int main(){
//         Node* a = new Node(1);
//         Node* b = new Node(2);
//         Node* c = new Node(3);
//         Node* d = new Node(4);
//         Node* e = new Node(5);
//         Node* f = new Node(6);
//         Node* g = new Node(7);

//         a->left = b;
//         a->right = c;
//         b->left = d;
//         b->right = e;
//         c->left = f;
//         c->right = g;
//         a->display(a);
//         cout<<endl;
//         cout<<"SUM: "<<a->summ(a);
//         cout<<endl;
//         cout<<"PRODUCT: "<<a->product(a);
//         cout<<endl;
//         cout<<"SIZE: "<<a->size(a);
//         cout<<endl;
//         cout<<"MAXIMUN VALUE: "<<a->maxValue(a);
//         cout<<endl;
//         cout<<"MINIMUN VALUE: "<<a->minValue(a);
//         cout<<endl;
//         cout<<"LEVELS: "<<a->levels(a);
//         cout<<endl;
//         cout<<"DIAMETER: "<<a->diameter(a);
// return 0;
// ;