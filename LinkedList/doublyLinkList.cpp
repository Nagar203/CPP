#include <iostream>

using namespace std;

class node{
    public:
        int data;
        node* next;
        node* prev;

    node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }

    ~node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"\nMemory is free for node with value: "<< value<< endl;
    }
};

void printLinkedList(node* head, node* tail){
    node* temp = head;

    while (temp !=NULL) {
        cout<<temp->data<<" ";
        temp = temp->next;
    }    
    cout<<endl;    
}


int getLinkedListLength(node* head){
    int cnt=0;
    node* temp = head;

    while (temp != NULL)    {
        cnt++;
        temp = temp->next;
    }
    
    return cnt;

}

void insertNodeAtHead(node* &head, node* &tail, int d){
    if (head == NULL){
        node* temp = new node(d);
        head = temp;
        tail = temp;    
    }
    else{
        node* temp = new node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertNodeAtTail(node* &tail, node* &head, int d){
    if (tail == NULL){
        node* temp = new node(d);
        tail = temp;
        head = temp;
    }
    else{
        node* temp = new node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insertAtAnyPosition(node* &tail, node* &head, int position, int d){
    int cnt = 1;
    node* temp = head;
    
    if(position == 1){
        insertNodeAtHead(head, tail, d);
        return;
    }

    while(cnt < position -1 ){
        // cout<<"Data: "<< temp->data <<endl;
        temp = temp->next;
        cnt++;
    }

    if(temp->next == NULL){
        insertNodeAtTail(tail, head, d);
        return;
    }

    node* p = new node(d);

    p->next = temp->next;
    temp->next->prev = p;
    temp->next = p;    
    p->prev = temp;
}

void deleteLinkedListNode(node* &head, node* &tail, int position){
    if (position==1){
        node* temp = head;
        head = temp->next;
        temp->next->prev = NULL;
        temp->next = NULL;
        delete temp;
        return;
    }
    else {
        int cnt = 0;
        node* temp = head;
        
        while(cnt < position -1 ){
            temp = temp->next;
            cnt++;
        }
        
        if (temp->next == NULL){
            temp->prev->next = NULL;
            tail = temp->prev;
            temp->prev = NULL;
            delete temp;
        }
        else{
            temp->next->prev = temp->prev;
            temp->prev->next = temp->next;
            temp->next = NULL;
            temp->prev = NULL;
            delete temp;
        }
    }    
}


int main(){

    // node* n1 = new node(20);
    
    node* head = NULL;
    node* tail = NULL;
    

    printLinkedList(head, tail);
    insertNodeAtHead(head, tail, 30);
    printLinkedList(head, tail);
    insertNodeAtHead(head, tail, 300);
    printLinkedList(head, tail);
    insertNodeAtHead(head, tail, 80);
    printLinkedList(head, tail);
    insertNodeAtHead(head, tail, 9);
    printLinkedList(head, tail);
    insertNodeAtTail(tail,head, 200);
    printLinkedList(head, tail);
    
    cout<<"Head: "<< head->data<<endl;
    cout<<"Tail: "<< tail->data<<endl;
    
    insertAtAnyPosition(tail, head, 2, 21);
    printLinkedList(head, tail);
    
    cout<<"Head: "<< head->data<<endl;
    cout<<"Tail: "<< tail->data<<endl;
    // printLinkedList(head, tail);
    // printLinkedList(head, tail);
    deleteLinkedListNode(head,tail, 6);
    printLinkedList(head, tail);

    int lenLL = getLinkedListLength(head);
    cout<<"Link List Length: "<<lenLL<<endl;

    cout<<"Head: "<<head->data<<" ";
    cout<<"Tail: "<<tail->data<<" ";
    return 0;
}