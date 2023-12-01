#include <iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;
        
    node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(node* &head, int d){
    // create a node
    node* temp = new node(d);
    temp->next = head;
    head = temp;
}

void printLinkedList(node* &head){
    node* temp = head;
    while(temp != NULL){
        cout<< temp->data <<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void insertAtTail(node* &tail, int d){
    node* temp = new node(d);
    tail->next = temp;
    
    tail = tail->next;
    
    while(temp->next != NULL){
        temp = temp->next;
    }
}

void insertAtPosition(node* &tail, node* &head, int position, int d){
    if(position == 1){
        insertAtHead(head,d);
        return;
    }
    node* temp = head;
    int cnt = 1;
    
    while(cnt < position -1){
        temp = temp->next;
        cnt++;
    }
    
    if(temp->next == NULL){
        insertAtTail(tail, d);
        return;
    }
    
    node* pos = new node(d);
    pos->next = temp->next;
    temp->next = pos;
}

int main(){

    node* n1 = new node(10);
    cout<< n1->data<<endl;
    cout<< n1->next<<endl;
    
    
    node* head = n1;
    node* tail = n1;
    
    printLinkedList(head);
    
    insertAtHead(head, 112);
    printLinkedList(head);
    
    insertAtTail(tail, 30);
    printLinkedList(head);
    
    insertAtHead(head, 82);
    printLinkedList(head);
    
    insertAtTail(tail, 50);
    printLinkedList(head);
    
    insertAtPosition(tail, head, 6, 48);
    printLinkedList(head);
    
    cout<<"Head: "<< head->data << endl;
    cout<<"tail: "<< tail->data << endl;
    
    return 0;
}