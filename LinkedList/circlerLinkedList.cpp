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

    ~node()  {
        int value = this->data;
        if (this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"\nMemory is free for node which have value: "<<value<<endl;
    }
};


void printLinkedList(node* tail){
    node* temp = tail;

    if(tail == NULL){
        cout<<"List is empty"<<endl;
    }
    else{
        do{        
            cout<<tail->data<<" ";
            tail = tail->next;
        }while (tail != temp); 
        cout<<endl;
    }
}

void addElementInCLL(node* &tail, int value, int d){
    
    if(tail == NULL){
        node* temp = new node(d);
        tail = temp;
        temp->next = temp; 
    }
    else{        
        node* p = tail;

        while(p->data != value){
            p = p->next;
        }

        node* temp = new node(d);
        temp->next = p->next;
        p->next = temp;        
    }
}

void deleteNodeCLL(node* &tail, int value){

    node* temp = tail;

    if (temp == NULL)
    {
        cout<<"List is empty.";
        return;
    }
    else{           
        node* prevNode = tail;
        node* currNode = prevNode->next;

        while(currNode->data != value){
            prevNode = currNode;
            currNode = currNode->next;
        }

        
        prevNode->next = currNode->next;
        if(currNode == prevNode){
            tail = NULL;
        }
        else if(currNode == tail){
            tail = prevNode;
        }
        currNode->next = NULL;
        delete currNode;
    }


}


int main(){

    node* tail = NULL;

    // printLinkedList(tail);
    addElementInCLL(tail, 1100, 10);
    addElementInCLL(tail, 10, 20);
    // addElementInCLL(tail, 10, 50);
    // addElementInCLL(tail, 20, 60);
    // printLinkedList(tail);
    deleteNodeCLL(tail, 20);
    printLinkedList(tail);


    return 0;
}