#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int maxDia;
    int val;
    Node* right;
    Node* left;

    Node(int val){
        this->left = NULL;
        this->right = NULL;
        this->val = val;
    }
};


void display(Node* root){
    if(root == NULL) return ;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
}


int summ(Node* root){
    if (root == NULL) return 0;
    return root->val+summ(root->right) + summ(root->left);
}


int product(Node* root){
    if(root == NULL)  return 1 ;
    return root->val * product(root->left) * product(root->right);
}

int size(Node* root){
    if (root == NULL) return 0;
    return 1 + size(root->right) + size(root->left);
}


int maxValue(Node* root){
    if (root == NULL) return INT_MIN;
    int leftMax =  maxValue(root->left);
    int rightMax =  maxValue(root->right);
    return max(root->val,max(leftMax , rightMax));
}



int minValue(Node* root){
    if (root == NULL) return INT_MAX;
    int leftMax =  minValue(root->left);
    int rightMax =  minValue(root->right);
    return min(root->val,min(leftMax , rightMax));
}


int levels(Node* root){
    if (root == NULL) return 0 ;
    return 1 + max(levels(root->right) , (levels(root->left)));

}


int diameter(Node* root){
    if (root == NULL) return 0;
    int dia = (levels(root->right) + levels(root->left));
    diameter(root->left);
    diameter(root->right);
    int maxDia = max(dia,maxDia);
}


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

        cout<<"Node Values: ";
        display(a);
        // cout<<endl;
        // cout<<"SUM: "<<summ(a)<<endl;
        // cout<<"Product: "<<product(a)<<endl;
        // cout<<"Size: "<<size(a)<<endl;
        // cout<<"Max Value: "<<maxValue(a)<<endl;
        // cout<<"Min Value: "<<minValue(a)<<endl;
        // cout<<"Levels: "<<levels(a)<<endl;
        // cout<<"diameter: "<<diameter(a)<<endl;
return 0;
}