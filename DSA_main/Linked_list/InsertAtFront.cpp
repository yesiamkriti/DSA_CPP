#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
// method 1
// void InsertAtFront(Node **head_ref ,int data){
//     Node* new_node = new Node();
//     new_node->data = data;
//     new_node->next = (*head_ref);
//     (*head_ref) = new_node;
// }
//method 2
void insert_beg(Node* &head,int data){
    Node* new_node =new Node();
    new_node->data = data;
    if(head==NULL){
        head=new_node;
        return;
    }
    
    new_node->next = head;
    head = new_node;
    return ;
}
void Display(Node* node){
    while(node!=NULL){
        cout<<" "<<node->data;
        node=node->next;
    }
    cout<<"\n";
}
int main(){
    int n;
    cout<<"how many data you want to enter: ";cin>>n;
    int data;

    Node* head =NULL;
    // InsertAtFront(&head,1);
    // InsertAtFront(&head,2);
    // InsertAtFront(&head,3);
    // InsertAtFront(&head,4);
    // InsertAtFront(&head,5);
    // InsertAtFront(&head,6);
    cout<<"insert the data: ";
    for(int i=0; i<n;i++){
        cin>>data;
        insert_beg(head,data);
    }
    cout << "After inserting Nodes at their front: ";
    Display(head);
    return 0;
}