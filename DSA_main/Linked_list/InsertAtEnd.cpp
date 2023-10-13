#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

};
    void InsertAtEnd(Node* &head,int data){
        Node* new_node = new Node();
        new_node->data =data;
        if(head == NULL){
            head = new_node;
        }
        Node* curr = head;
        while(curr->next!=NULL){
            curr=curr->next;
        }
        curr->next = new_node;
        new_node->next = NULL;
    }
    void Display(Node* head){
        Node* node = head;
        while(node!=NULL){
            cout<<" "<<node->data;
            node=node->next;
        }
        cout<<"\n";
    }
int main(){
    Node* head =NULL;
    int n;
    cout<<"how many data you want to enter: ";cin>>n;
    int data;
    cout<<"insert the data: ";
    for(int i=0; i<n;i++){
        cin>>data;
        InsertAtEnd(head,data);
    }
    cout << "After inserting Nodes at their front: ";
    Display(head);
    return 0;
}