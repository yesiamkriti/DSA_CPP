#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
void InsertAtFront(Node **head_ref ,int data){
    Node* new_node = new Node();
    new_node->data = data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
void Display(Node* node){
    while(node!=NULL){
        cout<<" "<<node->data;
        node=node->next;
    }
    cout<<"\n";
}
int main(){
    Node* head = NULL;
    InsertAtFront(&head,1);
    InsertAtFront(&head,2);
    InsertAtFront(&head,3);
    InsertAtFront(&head,4);
    InsertAtFront(&head,5);
    InsertAtFront(&head,6);
    cout << "After inserting Nodes at their front: ";
    Display(head);
    return 0;
}