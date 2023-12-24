#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    Node* prev;
    int data;
    Node* next;
    Node(int val): data(val),prev(NULL),next(NULL){}
};
class Doubly_linkedlist
{
public:
    Node* head;
    Node* tail;
    Doubly_linkedlist():head(NULL),tail(NULL){}

void InsertAtBeg(int val){
    Node* new_node = new Node(val);
    if(head==NULL){
        head =  new_node;
        tail = new_node;
        return;
    }
    new_node->next = head;
    head->prev = new_node;
    head = new_node;
    return ;

}
void InsertAtEnd(int val){
    Node* new_node = new Node(val);
    if(tail == NULL){
        tail = new_node;
        head = new_node;
        return ;
    }
    tail->next = new_node;
    new_node ->prev = tail;
    tail = new_node;
    return;
}
void InsertAfterGivenNode(int val,int pos){
    Node* new_node = new Node(val);
    int count = 1;
    Node* temp = head;
    while(count!=pos){
        temp = temp->next;
        count ++ ;
    }
    if(head == NULL){
        tail = new_node;
        head = new_node;
        return;
    }


}
void InsertBeforeGivenNode(){

}
void DeleteFromBeg(){

}
void DeleteFromEnd(){

}
void DeleteSpecificNode(){
    
}
void display(){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }  
}
};

int main(){
    Doubly_linkedlist dll;
    dll.InsertAtBeg (34);
    dll.InsertAtBeg (4);
    dll.InsertAtBeg (45);
    dll.InsertAtEnd(89);
    dll.InsertAtEnd(9);
    dll.InsertAtEnd(98);
    dll.display();
    return 0;
}