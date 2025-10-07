
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

    ~node(){
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }

        cout<<"\n Memory is free for node with value: "<< value<< endl;
        
    }
    
};

void insertNodeAtHead(node* &head, int d){
    node* temp = new node(d);
    temp->next = head;
    head = temp;
}

void insertNodeAtTail(node* &tail, int d){
    node* temp = new node(d);
    tail->next = temp;
    tail = tail->next;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    
}

void insertNodeAtPosition(node* &tail, node* &head,int position, int d){    
    if(position ==1){
        insertNodeAtHead(head,d);
        return;
    }
    
    node* p = head;    
    int cnt=1;

    

    while(cnt < position-1){
        p = p->next;
        cnt++;
    }

    while(p->next == NULL){
        insertNodeAtTail(tail, d);
        return;
    }

    node* temp = new node(d);
    temp->next = p->next;
    p->next = temp;
    
}

void deleteNodeAtAnyPosition(node* &head, int position){
    if (position == 1){
        node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else{
        node* currNode = head;
        node* preNode = NULL;
        int cnt =1;
        while (cnt<position){
            preNode = currNode;
            currNode = currNode->next;
            cnt++;
        }

        preNode->next= currNode->next;
        currNode->next = NULL;
        delete currNode;
        
    }
    
    
}


void printLinkList(node* &head){
    
    node* temp = head;    
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}



int main(){

    node* n1 = new node(10);
    node* head = n1;
    node* tail = n1;

    // cout<<n1->data<<endl;
    cout<<"\nTail: "<<tail->next<<endl;
    printLinkList(head);
    insertNodeAtHead(head, 20);
    
    printLinkList(head);
    insertNodeAtHead(head, 40);
    
    printLinkList(head);
    insertNodeAtTail(tail, 80);
    
    printLinkList(head);
    insertNodeAtHead(head, 200);
    
    printLinkList(head);
    insertNodeAtTail(tail, 70);
    
    printLinkList(head);
    insertNodeAtHead(head, 100);
    
    printLinkList(head);
    insertNodeAtPosition(tail, head, 8, 45);    
    printLinkList(head);

    cout<<"\nTail: "<<tail->data<<endl;
    cout<<"\nHead: "<<head->data<<endl;

    deleteNodeAtAnyPosition(head, 8);
    printLinkList(head);
    

    return 0;
}