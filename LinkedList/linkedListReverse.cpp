#include<iostream>

using namespace std;


class node
{

public:
    int data;
    node* next;

    node(int data)    {
        this->data = data;
        this->next = NULL;
    }

    ~node()    {
        int value = this->data;
        if(this->next != NULL )   {
            delete next;
            this->next = NULL;
        }
    }
};

void addNodeAtHead(node* &head, int d){
    if (head == NULL){
        node* temp = new node(d);
        head = temp;
    }
    else{
        node* p = new node(d);
        node* temp = head;

        p->next = temp;
        head = p;
    }
    

}

void printLL(node* head){
    node* temp = head;
    if(temp == NULL){
        cout<<"List is empty"<<endl;
    }
    else{
        while (temp != NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }
    cout<<endl;    
}



int lenLL(node* head){
    node* temp = head;
    int cnt=0;
    if(temp == NULL){
        return cnt;
    }
    else{
        while (temp != NULL){
            cnt++;
            temp = temp->next;
        }
    }
    return cnt;
}

void revers(node* &head, node* currtNode, node* prevNode){
    
    if(currtNode == NULL){
        head = prevNode;
        return;
    }
    node* nextNode = currtNode->next;
    revers(head, nextNode, currtNode);
    currtNode->next = prevNode;
}

node* reverseLL(node* &head){
    
    // using recursion

    node* currNode = head;
    node* prevNode = NULL;
    revers(head, currNode, prevNode);
    return head;

    // iteration method
    // if (head == NULL || head->next == NULL){
    //     return head;
    // }
    // else{       
        
    //     node* currNode = head;
    //     node* prevNode = NULL;
    //     node* nextNode = NULL;       
        
    //     while (currNode != NULL){  
    //         nextNode = currNode->next;
    //         currNode->next = prevNode;
    //         prevNode = currNode;
    //         currNode = nextNode;                   
    //     }       
    //     return prevNode; 
    // }
}



int main(){

    int len;
    node* head = NULL;
    // node* tail = NULL;
    // cout<<"Working";
    // printLL(head);
    addNodeAtHead(head, 60);
    addNodeAtHead(head, 90);
    addNodeAtHead(head, 40);
    // cout<<"head: "<<head->data<<endl;
    // addNodeAtHead(head, 80);    
    // cout<<"head: "<<head->data<<endl;
    printLL(head);
    cout<<"head in main: "<<head->data<<endl;
    cout<<"head in main address: "<<head<<endl;
    head = reverseLL(head);
    // cout<<"head data: "<<head->data<<endl;
    cout<<"LL After Reversal: "<<endl;
    cout<<"head in main: "<<head<<endl;
    printLL(head);
    
    len = lenLL(head);
    cout<<"Linked List Length: "<<len<<endl;
    cout<<"End of Execution"<<endl;

    

return 0;
}