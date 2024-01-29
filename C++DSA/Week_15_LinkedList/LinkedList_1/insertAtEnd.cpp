#include <iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->next = NULL;
        this->val  =val;
    }
};

class LinkedList{

};
int main(){
    
return 0;
}










// #include <iostream>
// using namespace std;
// class Node{
//     public:
//     int val;
//     Node* next;
//     Node(int val){
//         this->val = val;
//         this->next = NULL;
//     }
// };

// Node* insertAtEnd(Node*head , int val){
//     Node* newNode = new Node( val);
//     if(head == NULL){
//         head = newNode;
//     }
//     else{
//         Node* temp = head;
//         while (temp->next!=NULL)
//         {
//             temp =temp->next;
//         }
//         temp->next = newNode;
        
//     }
//     return head;
// }
// void display(Node* head) {
//     Node* temp = head;
//     while (temp != nullptr) {
//         cout << temp->val << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }
// int main(){
//     Node* head = NULL;
//     display( insertAtEnd(head , 10));
// return 0;
// }